#include "Word.h"

Word::Word(string word) : m_word(word) {
    for (char c : m_word) {
        m_currentWord.push_back('_');
    }
}

string Word::getWord() {
    return string(m_currentWord.begin(), m_currentWord.end());
}

void Word::addLetter(char letter) {
    for (size_t i = 0; i < m_word.size(); i++) {
        if (m_word[i] == letter) {
            auto it = next(m_currentWord.begin(), i);
            *it = letter;
        }
    }
}

bool Word::findLetter(char letter) {
    return m_word.find(letter) != string::npos;
}

bool Word::solved() {
    return getWord() == m_word;
}
bool Word::guessWord(string guess) {
    return guess == m_word;  // Extra credit, check if the guessed word matches
}
