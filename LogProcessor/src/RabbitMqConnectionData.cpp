/*
 * rabbitMqConnectionData.cpp
 *
 *  Created on: Sep 25, 2015
 *      Author: eisrpav
 */

#include "RabbitMqConnectionData.h"

RabbitMqConnectionData::RabbitMqConnectionData(const std::string &hostname,
    int port,
    const std::string &exchange,
    const std::string &rutingkey) :
    hostname_(hostname),
    port_(port),
    exchange_(exchange),
    routingkey_(rutingkey)
{
  // TODO Auto-generated constructor stub

}

RabbitMqConnectionData::~RabbitMqConnectionData()
{
  // TODO Auto-generated destructor stub
}

