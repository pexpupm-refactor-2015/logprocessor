/*
 * StandardLog.h
 *
 *  Created on: Oct 2, 2015
 *      Author: eisrpav
 */

#ifndef STANDARDLOG_H_
#define STANDARDLOG_H_

#include <string>

class StandardLog
{
public:
  StandardLog() {}
  StandardLog(const std::string &timestamp, const std::string &component,
      const std::string &severity, const std::string &text);
  ~StandardLog();

  std::string toString() const;

  const std::string& getComponent() const
  {
    return component_;
  }

  const std::string& getSeverity() const
  {
    return severity_;
  }

  const std::string& getText() const
  {
    return text_;
  }

  const std::string& getTimestamp() const
  {
    return timestamp_;
  }

private:
  std::string timestamp_;
  std::string component_;
  std::string severity_;
  std::string text_;
};

#endif /* STANDARDLOG_H_ */
