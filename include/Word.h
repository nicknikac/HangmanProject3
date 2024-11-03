#ifndef WORD_H
#define WORD_H

#include <list>
#include <string>

using namespace std;

class Word {
private:
    list<char> m_currentWord;
    string m_word;

public:
    Word(string word);
    string getWord();
    void addLetter(char letter);
    bool findLetter(char letter);
    bool solved();
    bool guessWord(string guess);  // Extra credit , user enter word guess

};

#endif
