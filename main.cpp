#include <iostream>
#include "word.h"
#include "guessedLetters.h"
#include "gameState.h"
using namespace std;

int main()
{
    Word word("JUGGLE");
    GuessedLetters guessed = GuessedLetters();
    GameState state = GameState();
    char letter;

    do {
       cout << "Game state: " << state.getState() << endl;
       cout << "Guessed letters: " << guessed.getLetters() << endl;
       cout << "Guess this word: " << word.getWord() << endl << endl;
       cout << "Enter a letter or guess the whole word: ";
       string guess; // Added this for guessing letters/words
       cin >> guess; // Added this for guessing letters/words

       if (guess.length() == 1) {
           letter = toupper(guess[0]);
           if (guessed.getLetters().find(letter) == string::npos) { // added logic to check if letter
                    was guessed
               guessed.addLetter(letter);
               if (word.findLetter(letter)) {
                   word.addLetter(letter);
               } else {
                   state.addState();
               }
           } else {
               cout << "You already guessed that letter." << endl;
           }
       } else { // Added this for word guesses
           if (word.guessWord(guess)) {
               cout << "Congratulations, you guessed the word: " << endl;
               break; // Added to exit new loop
           } else {
               cout << "Incorrect guess. Try again." << endl;
               state.addState();
           }
       }
    } while ((!state.gameOver()) && (!word.solved()));

    if (state.gameOver()) {
       cout << endl << "Game state: " << state.getState() << endl;
       cout << "Sorry you lose" << endl;
       cout << "The word was: JUGGLE" << endl;
    } else {
        cout << endl << "Congratulations, you guessed the word: " << word.getWord() << endl;
    }

    return 0;
}
