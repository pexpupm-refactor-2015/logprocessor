/*
 * Log2StandardLog.h
 *
 *  Created on: Oct 2, 2015
 *      Author: eisrpav
 */

#ifndef LOG2STANDARDLOG_H_
#define LOG2STANDARDLOG_H_

#include "StandardLog.h"

class Log2StandardLog
{
public:
  Log2StandardLog();
  virtual ~Log2StandardLog();

  virtual StandardLog generate(const std::string &log) const = 0;
};

#endif /* LOG2STANDARDLOG_H_ */
