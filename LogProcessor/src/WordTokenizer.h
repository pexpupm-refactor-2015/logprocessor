/*
 * WordTokenizer.h
 *
 *  Created on: Oct 12, 2015
 *      Author: eisrpav
 */

#ifndef WORDTOKENIZER_H_
#define WORDTOKENIZER_H_

#include <string>
#include <vector>

class WordTokenizer
{
public:
  WordTokenizer();
  ~WordTokenizer();

  static std::vector<std::string> getWords(const std::string &log);
};

#endif /* WORDTOKENIZER_H_ */
