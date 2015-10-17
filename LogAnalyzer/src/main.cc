/*
 * main.cc
 *
 *  Created on: Oct 2, 2015
 *      Author: eisrpav
 */


#include <iostream>
#include <unistd.h>
#include <stdlib.h>

#include "LogReceiver.h"
#include "LogAnalyzer.h"
#include "StdLine2StandardLog.h"
#include "ConfigFile2AnalyzerData.h"

int main (int argc, char **argv)
{
  int c;
  std::string confFile("default.cfg");
  while ((c = getopt (argc, argv, "f:")) != -1)
  {
    switch (c)
    {
    case 'f':
    {
      confFile = optarg;
      std::cout << "<configurationFile> = [" << confFile << "]" << std::endl;
      break;
    }
    default:
    {
      std::cout << "usage: LogAnalyzer -f <configurationFile>" << std::endl;
      std::cout << "using default [" << confFile << "]" << std::endl;
    }
      break;
    }
  }
  std::cout << "LOG ANALYZER START" << std::endl;
  std::cout << "<configurationFile> = [" << confFile << "]" << std::endl;

  LogAnalyzerData config = ConfigFile2AnalyzerData::getData(confFile);
  LogReceiver recevier("logAnalyzer");
  LogAnalyzer analycer(config);
  StdLine2StandardLog processor;

  while (true)
  {
    std::string log = recevier.recvLog();
    StandardLog stdLog = processor.generate(log);
    analycer.analyzeLog(stdLog);
  }

  std::cout << "LOG ANALYZER END" << std::endl;
}



