#include <iostream>
#include <stdio.h>
#include <vector>
#include "includes/classes/main.h"
#include "includes/functions/functions.h"

using namespace std;

int numberOfPlayers = 20;

vector<Player *> spawnPlayers(int count)
{
  vector<Player *> players;
  for (int i = 1; i < count; i++)
  {
    string id = gen_random_string(8);
    Player *p;
    p->setId(id);
    players.push_back(p);
  };

  return players;
};

int main()
{
  Board board;
  board.initialize(spawnPlayers(numberOfPlayers));
  vector<string> ids = board.getPlayerIds();
  // for (int i = 1; i < board.players.size(); i++)
  // {

  // }

  return 0;
}