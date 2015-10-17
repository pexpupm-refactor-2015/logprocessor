/*
 * LogAnalyzer.h
 *
 *  Created on: Oct 12, 2015
 *      Author: eisrpav
 */

#ifndef LOGANALYZER_H_
#define LOGANALYZER_H_

#include "StandardLog.h"
#include <vector>
#include <string>

#include "StandardLogFileHandler.h"

class LogAnalyzerData
{
public:
  std::vector<std::string> keys;
  std::string outputFilePath;
};

class LogAnalyzer
{
public:
  explicit LogAnalyzer(LogAnalyzerData &data);
  ~LogAnalyzer();

  void analyzeLog(const StandardLog &log);
private:
  LogAnalyzerData data_;
  StandardLogFileHandler fileHandler_;
};

#endif /* LOGANALYZER_H_ */
