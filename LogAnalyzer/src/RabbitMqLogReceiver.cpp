/*
 * RabbitMqLogReceiver.cpp
 *
 *  Created on: Oct 2, 2015
 *      Author: eisrpav
 */

#include "RabbitMqLogReceiver.h"

#include <amqp_tcp_socket.h>
#include <amqp_framing.h>
#include <iostream>
#include <string.h>

RabbitMqLogReceiver::RabbitMqLogReceiver(const RabbitMqConnectionData &data) :
data_(data)
{
  int status = 0;
  amqp_socket_t *socket = NULL;

  amqp_bytes_t queuename;

  conn_ = amqp_new_connection();

  socket = amqp_tcp_socket_new(conn_);
  if (!socket) {
    std::cout << "serverRabbitMq: error in amqp_tcp_socket_new" << std::endl;
  }

  status = amqp_socket_open(socket, data_.getHostname().c_str(), data_.getPort());
  if (status) {
    std::cout << "SERVER: problem in amqp_socket_open" << std::endl;
  }

  amqp_login(conn_, "/", 0, 131072, 0, AMQP_SASL_METHOD_PLAIN, "guest", "guest");
  amqp_channel_open(conn_, 1);
  amqp_get_rpc_reply(conn_);


  amqp_queue_declare_ok_t *r = amqp_queue_declare(conn_, 1, amqp_empty_bytes, 0, 0, 0, 1,
      amqp_empty_table);
  amqp_get_rpc_reply(conn_);
  queuename = amqp_bytes_malloc_dup(r->queue);
  if (queuename.bytes == NULL) {
    std::cout << "problem in amqp_bytes_malloc_dup" << std::endl;
    //fprintf(stderr, "Out of memory while copying queue name");
    //return 1;
  }

  amqp_queue_bind(conn_, 1, queuename, amqp_cstring_bytes(data_.getExchange().c_str()),
      amqp_cstring_bytes(data_.getRoutingkey().c_str()), amqp_empty_table);
  amqp_get_rpc_reply(conn_);

  amqp_basic_consume(conn_, 1, queuename, amqp_empty_bytes, 0, 1, 0, amqp_empty_table);
  amqp_get_rpc_reply(conn_);

}

RabbitMqLogReceiver::~RabbitMqLogReceiver()
{
  amqp_channel_close(conn_, 1, AMQP_REPLY_SUCCESS);
  amqp_connection_close(conn_, AMQP_REPLY_SUCCESS);
  amqp_destroy_connection(conn_);
}

std::string RabbitMqLogReceiver::recvLog()
{
  std::string log;
  amqp_rpc_reply_t res;
  amqp_envelope_t envelope;

  amqp_maybe_release_buffers(conn_);

  //std::cout << "RabbitMqLogReceiver::recvLog" << std::endl;

  res = amqp_consume_message(conn_, &envelope, NULL, 0);

  if (AMQP_RESPONSE_NORMAL != res.reply_type) {
    return log;
  }

  log = std::string(static_cast<char*>(envelope.message.body.bytes), envelope.message.body.len);

  amqp_destroy_envelope(&envelope);
  return log;
}
