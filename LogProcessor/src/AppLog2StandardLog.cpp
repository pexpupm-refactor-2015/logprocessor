/*
 * AppLog2StandardLog.cpp
 *
 *  Created on: Oct 12, 2015
 *      Author: eisrpav
 */

#include "AppLog2StandardLog.h"
#include "WordTokenizer.h"
#include "WordLengthFilter.h"
#include <iostream>

AppLog2StandardLog::AppLog2StandardLog()
{
  // TODO Auto-generated constructor stub

}

AppLog2StandardLog::~AppLog2StandardLog()
{
  // TODO Auto-generated destructor stub
}

StandardLog AppLog2StandardLog::generate(const std::string &log) const
{
  std::string timestamp;
  std::string component;
  std::string severity;
  std::string text;

  std::vector<std::string> words = WordTokenizer::getWords(log);

  timestamp = words[0];
  component = words[1];
  severity = words[2];
  for (size_t i = 3; i < words.size(); i++)
  {
    if (WordLengthFilter::isLargerThan(words[i],3))
    {
      if (text.compare("") != 0) text += " ";
      text += words[i];
    }
  }

  return StandardLog(timestamp, component, severity, text);
}
