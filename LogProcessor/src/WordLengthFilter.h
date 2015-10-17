/*
 * WordLengthFilter.h
 *
 *  Created on: Oct 12, 2015
 *      Author: eisrpav
 */

#ifndef WORDLENGTHFILTER_H_
#define WORDLENGTHFILTER_H_

#include <string>

class WordLengthFilter
{
public:
  WordLengthFilter();
  ~WordLengthFilter();

  static bool isLargerThan(const std::string &word, const size_t length);
};

#endif /* WORDLENGTHFILTER_H_ */
