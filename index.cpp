#include <iostream>
#include <stdio.h>
#include <vector>
#include "includes/classes/main.h"
#include "includes/functions/functions.h"

using namespace std;

int numberOfPlayers = 25;




vector<Player*> spawnPlayers(int count) {
  vector<Player> players;
    for(int i; i<count; i++) {
      string id = gen_random_string(8);
        Player p;
          p.setId(id);
          players.push_back(p);
    };
    
};

int main () {
    Board board;

    board.initialize(spawnPlayers(numberOfPlayers));
    vector<string> pids = board.getPlayerIds();
      for(int i; i<pids.size(); i++) {
        cout << "id-" << i << "=" << pids.at(i) << endl;
      };

  return 0;
}