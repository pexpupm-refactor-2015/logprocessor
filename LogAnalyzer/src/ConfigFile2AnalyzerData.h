/*
 * ConfigFile2AnalyzerData.h
 *
 *  Created on: Oct 12, 2015
 *      Author: eisrpav
 */

#ifndef CONFIGFILE2ANALYZERDATA_H_
#define CONFIGFILE2ANALYZERDATA_H_

#include "LogAnalyzer.h"


/** Example :
 *
 *outputFile:critic_issues.log
 *keys:codedump aborted panic
 *
 */

class ConfigFile2AnalyzerData
{
public:
  ConfigFile2AnalyzerData();
  ~ConfigFile2AnalyzerData();

  static LogAnalyzerData getData(const std::string &file);
};

#endif /* CONFIGFILE2ANALYZERDATA_H_ */
