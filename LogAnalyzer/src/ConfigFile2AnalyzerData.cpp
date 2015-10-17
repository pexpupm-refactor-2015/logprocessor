/*
 * ConfigFile2AnalyzerData.cpp
 *
 *  Created on: Oct 12, 2015
 *      Author: eisrpav
 */

#include "ConfigFile2AnalyzerData.h"
#include <iostream>
#include <fstream>
#include "WordTokenizer.h"

ConfigFile2AnalyzerData::ConfigFile2AnalyzerData()
{
  // TODO Auto-generated constructor stub

}

ConfigFile2AnalyzerData::~ConfigFile2AnalyzerData()
{
  // TODO Auto-generated destructor stub
}

LogAnalyzerData ConfigFile2AnalyzerData::getData(const std::string &file)
{
  LogAnalyzerData data;
  std::string line;
  std::ifstream myfile (file);
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      if (line.find("outputFile:") != std::string::npos)
      {
        data.outputFilePath = line.substr(sizeof("outputFile:") - 1);
      }
      else if (line.find("keys:") != std::string::npos)
      {
        data.keys = WordTokenizer::getWords(line.substr(sizeof("keys:") -1));
      }
    }
    myfile.close();
  }
  else
  {
    std::cout << "ConfigFile2AnalyzerData::getData(" << file << ") -> cannot open file" << std::endl;
  }

//  std::cout << "Outfile: [" << data.outputFilePath << "]" << std::endl;
//  for (auto w : data.keys)
//  {
//    std::cout << "Key [" << w << "]" << std::endl;
//  }

  return data;
}
