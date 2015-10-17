/*
 * RabbitMqLogSender.cpp
 *
 *  Created on: Oct 12, 2015
 *      Author: eisrpav
 */

#include "RabbitMqLogSender.h"

#include <iostream>

#include <amqp_tcp_socket.h>
#include <amqp_framing.h>

RabbitMqLogSender::RabbitMqLogSender(const RabbitMqConnectionData &data) :
data_(data),
conn_()
{
  int status;
  amqp_socket_t *socket = NULL;

  conn_ = amqp_new_connection();

  socket = amqp_tcp_socket_new(conn_);
  if (!socket) {
    std::cout << "clientRabbitMq: Error in amqp_tcp_socket_new" << std::endl;
  }

  status = amqp_socket_open(socket, data_.getHostname().c_str(), data_.getPort());
  if (status) {
    std::cout << "clientRabbitMq: Error in amqp_socket_open" << std::endl;
  }

  amqp_login(conn_, "/", 0, 131072, 0, AMQP_SASL_METHOD_PLAIN, "guest", "guest");
  amqp_channel_open(conn_, 1);
  amqp_get_rpc_reply(conn_);
}

RabbitMqLogSender::~RabbitMqLogSender()
{
  amqp_channel_close(conn_, 1, AMQP_REPLY_SUCCESS);
  amqp_connection_close(conn_, AMQP_REPLY_SUCCESS);
  amqp_destroy_connection(conn_);
}

void RabbitMqLogSender::sendLog(const std::string &log)
{
  amqp_basic_properties_t props;
  props._flags = AMQP_BASIC_CONTENT_TYPE_FLAG | AMQP_BASIC_DELIVERY_MODE_FLAG;
  props.content_type = amqp_cstring_bytes("text/plain");
  props.delivery_mode = 2; /* persistent delivery mode */

  amqp_basic_publish(conn_,
      1,
      amqp_cstring_bytes(data_.getExchange().c_str()),
      amqp_cstring_bytes(data_.getRoutingkey().c_str()),
      0,
      0,
      &props,
      amqp_cstring_bytes(log.c_str()));
}
