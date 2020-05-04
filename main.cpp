#include <iostream>
#include "magic.h"
#include "plague.h"
#include "divine_revenge.h"
#include "plague_divine_revenge.h"

using namespace std;

int main() {

    cout << "Create a spell (class) of the school of light magic" << endl;
    divine_revenge spell_dv;
    spell_dv.conjure();
    spell_dv.using_magic();
    cout << endl;

    cout << "Create a spell (class) of the school of magic of darkness" << endl;
    plague spell_p;
    spell_p.conjure();
    spell_p.using_magic();
    cout << endl;

    cout << "Create the original magic (parent class)" << endl;
    magic* mg = NULL;
    mg = &spell_dv;
    mg->using_magic();
    mg = &spell_p;
    mg->using_magic();
    cout << endl;

    cout << "Create a combination spell (class)" << endl;
    plague_divine_revenge spell_pdv;
    spell_pdv.conjure();
    cout << endl << "using magic:" << endl;
    spell_pdv.using_magic();
    cout << endl;

    return 0;
}
