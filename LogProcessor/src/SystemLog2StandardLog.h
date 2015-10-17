/*
 * SystemLog2StandardLog.h
 *
 *  Created on: Oct 2, 2015
 *      Author: eisrpav
 */

#ifndef SYSTEMLOG2STANDARDLOG_H_
#define SYSTEMLOG2STANDARDLOG_H_

#include "Log2StandardLog.h"

class SystemLog2StandardLog: public Log2StandardLog
{
public:
  SystemLog2StandardLog();
  ~SystemLog2StandardLog();

  virtual StandardLog generate(const std::string &log) const;

private:
  static std::string severityNumber2String(const std::string number);
};

#endif /* SYSTEMLOG2STANDARDLOG_H_ */
