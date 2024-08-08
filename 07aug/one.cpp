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
    int rizz = 0;

    rizzler(string name, int gyattlevel, string baddie) {
        this->name = name;
        this->gyattlevel = gyattlevel;
        this->baddie = baddie;
    }

    // Creating an array of the baddies this rizzler likes
    string baddiearray[10];
    string rizzdiag[] = {"Are you from tenessee, cause' your the only 10 I see.", "Girl, you so fine, Imma make you mine", "You're contagious like the flu, and I wanna stick together as glue"};

    void addBaddie() {
        cout << "Do you want to add a baddie?: " << endl;
        string addb;
        cin >> addb;
        baddiearray[baddiecounter] = addb;
        baddiecounter = baddiecounter + 1;
    }

    void getRizz() {
        if (baddiecounter > 2 && gyattlevel > 10) {
            cout << rizzdiag[0] << endl;
        } else {
            cout << "Go away you alpha, you got no rizz" << endl;
        }
    }

    /* To calculate memory location of index, formula is required
     * A[i] = BaseAddress + {w(length of each element) * (jiska nikalna hai - first index)}
     * Array Size = last index - first index +1
     * */

    void addRizz() {
        int qcount = 0;
        int temp;
        cout << "Are you a beta male? 1 for Yes, 0 for No: ";
        cin >> temp;
        qcount += temp;
        cout << "Edging streak in number of hours?: ";
        cin >> temp;
        qcount += temp;
        cout << "Ohio is which state of US?: ";
        cin >> temp;
        qcount += temp;

        if (qcount == 23) {
            cout << "Good, sigma males can have rizz. :thumbs up";
            rizz = rizz + 50;
        }
    }

    void foodAdd() {

    }
};

