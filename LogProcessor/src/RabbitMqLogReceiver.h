/*
 * RabbitMqLogReceiver.h
 *
 *  Created on: Oct 2, 2015
 *      Author: eisrpav
 */

#ifndef RABBITMQLOGRECEIVER_H_
#define RABBITMQLOGRECEIVER_H_

#include "RabbitMqConnectionData.h"
#include <amqp.h>

class RabbitMqLogReceiver
{
public:
  RabbitMqLogReceiver(const RabbitMqConnectionData &data);
  ~RabbitMqLogReceiver();

  std::string recvLog();
private:
  RabbitMqConnectionData data_;
  amqp_connection_state_t conn_;
};

#endif /* RABBITMQLOGRECEIVER_H_ */

