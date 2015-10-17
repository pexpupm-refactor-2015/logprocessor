/*
 * WordTokenizer.cpp
 *
 *  Created on: Oct 12, 2015
 *      Author: eisrpav
 */

#include "WordTokenizer.h"

#include <iostream>
#include <sstream>

WordTokenizer::WordTokenizer()
{
  // TODO Auto-generated constructor stub

}

WordTokenizer::~WordTokenizer()
{
  // TODO Auto-generated destructor stub
}

std::vector<std::string> WordTokenizer::getWords(const std::string &log)
{
  static char WORD_DELIMITER = ' ';
  std::vector<std::string> words;

  std::istringstream stream(log);
  std::string newWord;
  while (getline(stream, newWord, WORD_DELIMITER)) {
      //std::cout << "WordTokenizer::getWords[" << newWord << "]" << std::endl;
      words.push_back(newWord);
  }

  return words;
}
