#include "main.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void Board::initialize(vector<Player *> players_params)
{
    cout << "Board initialized with: " << players_params.size() << endl;
    players = players_params;
};

vector<string> Board::getPlayerIds()
{
    vector<string> s;
    if (is_initialized)
    {
        // for (Player *p : players)
        // {
        //     cout << p->id << endl;
        // }
    }
    else
    {
        cout << "Board Not Initialized!";
    };
    return s;
}