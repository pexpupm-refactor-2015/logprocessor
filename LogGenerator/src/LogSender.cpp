/*
 * LogSender.cpp
 *
 *  Created on: Oct 12, 2015
 *      Author: eisrpav
 */

#include "LogSender.h"

LogSender::LogSender(const std::string &queue) :
sender_(RabbitMqConnectionData("localhost",
  5672,
  "amq.direct",
  queue))
{

}

LogSender::~LogSender()
{
  // TODO Auto-generated destructor stub
}

void LogSender::sendLog(const std::string &log)
{
  sender_.sendLog(log);
}
