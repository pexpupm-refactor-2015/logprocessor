/*
 * main.cc
 *
 *  Created on: Oct 2, 2015
 *      Author: eisrpav
 */


#include <iostream>

#include "ProcessorPipeline.h"

int main ()
{
  std::cout << "LOG PROCESSOR START" << std::endl;
  ProcessorPipeline pipeline;
  pipeline.run();
  std::cout << "LOG PROCESSOR END" << std::endl;
}



