/*
 * ProcessorPipeline.cpp
 *
 *  Created on: Oct 2, 2015
 *      Author: eisrpav
 */

#include "ProcessorPipeline.h"

#include "LogReceiver.h"
#include "LogClassificator.h"
#include "SystemLog2StandardLog.h"
#include "AppLog2StandardLog.h"
#include "StandardLogFileHandler.h"
#include "LogSender.h"

#include <iostream>

ProcessorPipeline::ProcessorPipeline()
{
  // TODO Auto-generated constructor stub
}

ProcessorPipeline::~ProcessorPipeline()
{
  // TODO Auto-generated destructor stub
}

void ProcessorPipeline::run()
{
  LogReceiver logReceiver("logServer");
  StandardLogFileHandler fileHandler("standard.log");
  LogSender logSender("logAnalyzer");

  while (true)
  {
    std::string newLog = logReceiver.recvLog();
    //std::cout << "ProcessorPipeline::run - new log [" << newLog << "]" << std::endl;
    LogTypeEnum type = LogClassificator::classify(newLog);
    StandardLog standardLog;
    switch(type)
    {
    case LogTypeEnum::SYSTEM_LOG:
    {
      SystemLog2StandardLog processor;
      standardLog = processor.generate(newLog);
      break;
    }
    case LogTypeEnum::APPLICATION_LOG:
    {
      AppLog2StandardLog processor;
      standardLog = processor.generate(newLog);
      break;
    }
    case LogTypeEnum::UNKNOWN_LOG:
    {
      // TODO: Err handling
      continue;
      break;
    }
    }
    //std::cout << "ProcessorPipeline - Std log [" << standardLog.toString() << "]" << std::endl;
    fileHandler.addLog(standardLog);
    logSender.sendLog(standardLog.toString());
  }
}
