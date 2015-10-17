/*
 * LogReceiver.cpp
 *
 *  Created on: Oct 2, 2015
 *      Author: eisrpav
 */

#include "LogReceiver.h"

LogReceiver::LogReceiver(const std::string &queue) :
receiver_(RabbitMqConnectionData("localhost",
  5672,
  "amq.direct",
  queue))
{
  // TODO Auto-generated constructor stub
}

LogReceiver::~LogReceiver()
{
  // TODO Auto-generated destructor stub
}

std::string LogReceiver::recvLog()
{
  std::string newLog;

  newLog = receiver_.recvLog();

  return newLog;
}
