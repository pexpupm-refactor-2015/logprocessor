/*
 * StandardLog.cpp
 *
 *  Created on: Oct 2, 2015
 *      Author: eisrpav
 */

#include "StandardLog.h"

StandardLog::StandardLog(const std::string &timestamp, const std::string &component,
    const std::string &severity, const std::string &text) :
    timestamp_(timestamp),
    component_(component),
    severity_(severity),
    text_(text)
{
  // TODO Auto-generated constructor stub
}

StandardLog::~StandardLog()
{
  // TODO Auto-generated destructor stub
}

std::string StandardLog::toString() const
{
  std::string output;
  output += timestamp_ + "\n";
  output += component_ + "\n";
  output += severity_ + "\n";
  output += text_ + "\n";

  return output;
}
