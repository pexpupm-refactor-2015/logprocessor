/*
 * LogAnalyzer.cpp
 *
 *  Created on: Oct 12, 2015
 *      Author: eisrpav
 */

#include "LogAnalyzer.h"

LogAnalyzer::LogAnalyzer(LogAnalyzerData &data) :
data_(data),
fileHandler_(data_.outputFilePath)
{
  // TODO Auto-generated constructor stub
}

LogAnalyzer::~LogAnalyzer()
{
  // TODO Auto-generated destructor stub
}

void LogAnalyzer::analyzeLog(const StandardLog &log)
{
  for (auto key : data_.keys)
  {
    if (log.getText().find(key) != std::string::npos)
    {
      fileHandler_.addLog(log);
      break;
    }
  }
}
