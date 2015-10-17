/*
 * LogReceiver.h
 *
 *  Created on: Oct 2, 2015
 *      Author: eisrpav
 */

#ifndef LOGRECEIVER_H_
#define LOGRECEIVER_H_

#include <string>

#include "RabbitMqLogReceiver.h"

class LogReceiver
{
public:
  LogReceiver(const std::string &queue);
  ~LogReceiver();

  std::string recvLog();

private:
  RabbitMqLogReceiver receiver_;
};

#endif /* LOGRECEIVER_H_ */
