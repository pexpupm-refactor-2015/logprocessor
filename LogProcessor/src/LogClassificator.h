/*
 * LogClassificator.h
 *
 *  Created on: Oct 2, 2015
 *      Author: eisrpav
 */

#ifndef LOGCLASSIFICATOR_H_
#define LOGCLASSIFICATOR_H_

#include <string>

enum class LogTypeEnum
{
  SYSTEM_LOG,
  APPLICATION_LOG,
  UNKNOWN_LOG
};

class LogClassificator
{
public:
  LogClassificator();
  ~LogClassificator();

  static LogTypeEnum classify(const std::string &log);
};

#endif /* LOGCLASSIFICATOR_H_ */
