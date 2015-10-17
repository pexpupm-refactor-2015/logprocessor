/*
 * LogSender.h
 *
 *  Created on: Oct 12, 2015
 *      Author: eisrpav
 */

#ifndef LOGSENDER_H_
#define LOGSENDER_H_

#include "RabbitMqLogSender.h"

class LogSender
{
public:
  LogSender(const std::string &queue);
  ~LogSender();

  void sendLog(const std::string &log);

private:
  RabbitMqLogSender sender_;
};

#endif /* LOGSENDER_H_ */
