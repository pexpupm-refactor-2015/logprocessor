/*
 * LogClassificator.cpp
 *
 *  Created on: Oct 2, 2015
 *      Author: eisrpav
 */

#include "LogClassificator.h"
#include <iostream>

LogClassificator::LogClassificator()
{
  // TODO Auto-generated constructor stub

}

LogClassificator::~LogClassificator()
{
  // TODO Auto-generated destructor stub
}

LogTypeEnum LogClassificator::classify(const std::string &log)
{
  static const std::string ERROR = "ERROR";
  static const std::string WARN = "WARN";
  static const std::string DEBUG = "DEBUG";

  size_t start = log.find_first_of(' ');
  if (start == std::string::npos) return LogTypeEnum::UNKNOWN_LOG;

  size_t end = log.find_first_of(' ', start + 1);
  if (end == std::string::npos) return LogTypeEnum::UNKNOWN_LOG;

  std::string tentativeSeverity = log.substr(start + 1, end - 1 - start);

  if (tentativeSeverity.compare(ERROR) == 0) return LogTypeEnum::APPLICATION_LOG;
  if (tentativeSeverity.compare(WARN) == 0) return LogTypeEnum::APPLICATION_LOG;
  if (tentativeSeverity.compare(DEBUG) == 0) return LogTypeEnum::APPLICATION_LOG;

  return LogTypeEnum::SYSTEM_LOG;
}
