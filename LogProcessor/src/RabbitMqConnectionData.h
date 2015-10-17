/*
 * rabbitMqConnectionData.h
 *
 *  Created on: Sep 25, 2015
 *      Author: eisrpav
 */

#ifndef RABBITMQCONNECTIONDATA_H_
#define RABBITMQCONNECTIONDATA_H_

#include <string>

class RabbitMqConnectionData
{
public:
  RabbitMqConnectionData(const std::string &hostname,
      int port,
      const std::string &exchange,
      const std::string &rutingkey);
  ~RabbitMqConnectionData();

  const std::string& getExchange() const
  {
    return exchange_;
  }

  const std::string& getHostname() const
  {
    return hostname_;
  }

  int getPort() const
  {
    return port_;
  }

  const std::string& getRoutingkey() const
  {
    return routingkey_;
  }

private:
  std::string hostname_;
  int port_;
  std::string exchange_;
  std::string routingkey_;

};

#endif /* RABBITMQCONNECTIONDATA_H_ */
