/*
 * WordLengthFilter.cpp
 *
 *  Created on: Oct 12, 2015
 *      Author: eisrpav
 */

#include "WordLengthFilter.h"

WordLengthFilter::WordLengthFilter()
{
  // TODO Auto-generated constructor stub

}

WordLengthFilter::~WordLengthFilter()
{
  // TODO Auto-generated destructor stub
}

bool WordLengthFilter::isLargerThan(const std::string &word, const size_t length)
{
  bool res = false;
  if (word.size() > length) res = true;
  return res;
}
