/*
 * RabbitMqLogSender.h
 *
 *  Created on: Oct 12, 2015
 *      Author: eisrpav
 */

#ifndef RABBITMQLOGSENDER_H_
#define RABBITMQLOGSENDER_H_

#include "RabbitMqConnectionData.h"

#include <amqp.h>

class RabbitMqLogSender
{
public:
  RabbitMqLogSender(const RabbitMqConnectionData &data);
  ~RabbitMqLogSender();

  void sendLog(const std::string &log);
private:
  RabbitMqConnectionData data_;
  amqp_connection_state_t conn_;
};

#endif /* RABBITMQLOGSENDER_H_ */
