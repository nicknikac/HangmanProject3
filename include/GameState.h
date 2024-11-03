#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <list>
#include <string>

using namespace std;

class GameState {
private:
    list<string> m_state;
    const string m_allStates[7] = {
        "PLATFORM", "HEAD", "BODY", "LEFT_ARM",
        "RIGHT_ARM", "LEFT_LEG", "RIGHT_LEG"
    };
    int m_nextState;

public:
    GameState();
    string getState();
    void addState();
    bool gameOver();
};

#endif
