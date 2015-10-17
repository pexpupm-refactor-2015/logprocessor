/*
 * StandardLogFileHandler.h
 *
 *  Created on: Oct 12, 2015
 *      Author: eisrpav
 */

#ifndef STANDARDLOGFILEHANDLER_H_
#define STANDARDLOGFILEHANDLER_H_

#include "StandardLog.h"

class StandardLogFileHandler
{
public:
  explicit StandardLogFileHandler(const std::string &filePath);
  ~StandardLogFileHandler();

  void addLog(const StandardLog &log) const;
private:
  std::string file_;
};

#endif /* STANDARDLOGFILEHANDLER_H_ */
