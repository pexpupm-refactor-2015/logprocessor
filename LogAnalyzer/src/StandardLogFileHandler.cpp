/*
 * StandardLogFileHandler.cpp
 *
 *  Created on: Oct 12, 2015
 *      Author: eisrpav
 */

#include "StandardLogFileHandler.h"

#include <iostream>
#include <fstream>

StandardLogFileHandler::StandardLogFileHandler(const std::string &filePath) :
file_(filePath)
{
}

StandardLogFileHandler::~StandardLogFileHandler()
{
}

void StandardLogFileHandler::addLog(const StandardLog &log) const
{
  std::ofstream myfile (file_, std::ios_base::app);
  if (myfile.is_open())
  {
    myfile << log.getTimestamp() << std::endl;
    myfile << log.getComponent() << std::endl;
    myfile << log.getSeverity() << std::endl;
    myfile << log.getText() << std::endl;
    myfile << "--" << std::endl;
    myfile.close();
  }
}
