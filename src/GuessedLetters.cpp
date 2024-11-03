#include "GuessedLetters.h"

GuessedLetters::GuessedLetters() {}

string GuessedLetters::getLetters() {
    return string(m_guessed.begin(), m_guessed.end());
}

void GuessedLetters::addLetter(char letter) {
    m_guessed.push_back(letter);
}
