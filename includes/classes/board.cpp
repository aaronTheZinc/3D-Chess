#include "main.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void Board::initialize(vector<Player*> players_params) {
    cout << "Board initialized with: " << players_params.size() << endl;
    players = players_params;
};

vector<string>Board::getPlayerIds() {
    
}