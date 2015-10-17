/*
 * main.cc
 *
 *  Created on: Oct 12, 2015
 *      Author: eisrpav
 */

#include <iostream>
#include <unistd.h>

#include "LogSender.h"

int main()
{

  std::cout << "LOG GENERATOR STARTED" << std::endl;
  LogSender sender("logServer");

  while (true)
  {
    sender.sendLog("2015-09-13T01:28:23Z init 1 kernel panic");
    sender.sendLog("2015-09-22T09:15:46Z WARN stock_service StockController Timeout Database retries 3");
    sender.sendLog("2015-09-22T09:15:46Z ERROR msic_service CrystalBall This is an example of panic at the disco");
    sender.sendLog("2015-09-22T09:15:46Z DEBUG music_service MusicPlayer playing song with unexpected groove");

    sleep(1);
  }

  std::cout << "LOG GENERATOR END" << std::endl;

  return 0;
}

