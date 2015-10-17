/*
 * AppLog2StandardLog.h
 *
 *  Created on: Oct 12, 2015
 *      Author: eisrpav
 */

#ifndef APPLOG2STANDARDLOG_H_
#define APPLOG2STANDARDLOG_H_

#include "Log2StandardLog.h"

class AppLog2StandardLog: public Log2StandardLog
{
public:
  AppLog2StandardLog();
  ~AppLog2StandardLog();

  virtual StandardLog generate(const std::string &log) const;
};

#endif /* APPLOG2STANDARDLOG_H_ */
