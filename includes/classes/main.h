#include <string>
#include <vector>
using namespace std;

class Player
{

public:
    string id;
    void printId();
    void setId(string);
};
class Board
{

public:
    vector<Player *> players;
    void initialize(vector<Player *>);
    vector<string> getPlayerIds();

private:
    bool is_initialized;
};
