/*
 * SystemLog2StandardLog.cpp
 *
 *  Created on: Oct 2, 2015
 *      Author: eisrpav
 */

#include "SystemLog2StandardLog.h"
#include "WordTokenizer.h"
#include "WordLengthFilter.h"
#include <iostream>

SystemLog2StandardLog::SystemLog2StandardLog()
{
  // TODO Auto-generated constructor stub

}

SystemLog2StandardLog::~SystemLog2StandardLog()
{
  // TODO Auto-generated destructor stub
}

StandardLog SystemLog2StandardLog::generate(const std::string &log) const
{
  std::string timestamp;
  std::string component;
  std::string severity;
  std::string text;

  std::vector<std::string> words = WordTokenizer::getWords(log);

  timestamp = words[0];
  component = words[1];
  severity = severityNumber2String(words[2]);
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

std::string SystemLog2StandardLog::severityNumber2String(const std::string number)
{
  static const std::string ERROR = "ERROR";
  static const std::string WARN = "WARN";
  static const std::string INFO = "INFO";
  static const std::string DEBUG = "DEBUG";

  static const std::string ERROR_NUMBER = "1";
  static const std::string WARN_NUMBER = "2";
  static const std::string INFO_NUMBER = "3";
  static const std::string DEBUG_NUMBER = "4";

  if (number.compare(ERROR_NUMBER) == 0) return ERROR;
  if (number.compare(WARN_NUMBER) == 0) return WARN;
  if (number.compare(INFO_NUMBER) == 0) return INFO;
  if (number.compare(DEBUG_NUMBER) == 0) return DEBUG;

  return "";
}

