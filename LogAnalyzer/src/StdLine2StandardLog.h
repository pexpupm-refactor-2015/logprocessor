/*
 * stdLine2StandardLog.h
 *
 *  Created on: Oct 12, 2015
 *      Author: eisrpav
 */

#ifndef STDLINE2STANDARDLOG_H_
#define STDLINE2STANDARDLOG_H_

#include "Log2StandardLog.h"

class StdLine2StandardLog: public Log2StandardLog
{
public:
  StdLine2StandardLog();
  ~StdLine2StandardLog();

  virtual StandardLog generate(const std::string &log) const;
};

#endif /* STDLINE2STANDARDLOG_H_ */
