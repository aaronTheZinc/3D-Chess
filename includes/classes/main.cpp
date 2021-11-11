#include <iostream>
using namespace std;



class Player {

    public:
        string id;
        struct coordinates {
            int x, y,z;
        };
    bool canMove(coordinates& loc) {
        return true;
    };
};  

class Map {
    public:
        vector<*Player> players;

    //get all registered players
    vector<string> getAllPlayerIds() {
        vector<string> idVec;
        for(int player : players ) {
            Player player_ref = &player;
                idVec.push_back(player_ref.id);
        };
    return idVec
    };


};


