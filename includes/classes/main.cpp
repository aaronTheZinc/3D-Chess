#include "main.h"
#include <string>
#include <iostream>
using namespace std;

void Player::printId() {
    cout << id << endl;
};

void Player::setId(string val) {
   id = val;
};