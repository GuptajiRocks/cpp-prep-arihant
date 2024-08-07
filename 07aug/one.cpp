//
// Created by ariha on 07-08-2024.
//

/* Trying baddie programs for this brainrot generation
 * Mixing genz terminology with skibidi */

#include <iostream>
using namespace std;

class rizzler {
public:
    string name;
    string baddie;
    int gyattlevel;
    int baddiecounter = 0;
    rizzler(string name, int gyattlevel, string baddie) {
        this->name = name;
        this->gyattlevel = gyattlevel;
        this->baddie = baddie;
    }

    // Creating an array of the baddies this rizzler likes
    string baddiearray[10];

    void addBaddie() {
        cout << "Do you want to add a baddie?: " << endl;
        string addb;
        cin >> addb;
        baddiearray[baddiecounter] = addb;
        baddiecounter = baddiecounter + 1;
    }



};