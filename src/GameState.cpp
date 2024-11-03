#include "GameState.h"

GameState::GameState() : m_nextState(0) {}

string GameState::getState() {
    return m_state.empty() ? "" : m_state.back();
}

void GameState::addState() {
    if (m_nextState < 7) {
        m_state.push_back(m_allStates[m_nextState]);
        m_nextState++;
    }
}

bool GameState::gameOver() {
    return m_nextState >= 7;
}
