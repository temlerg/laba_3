//
// Created by Dima on 28.04.2020.
//

#include "divine_revenge.h"
#include <iostream>

using namespace std;

divine_revenge::divine_revenge() {
    spell_lvl_1 = 0;
    spell_lvl_2 = 0;
    cout << "divine_revenge constructor()" << endl;
}

divine_revenge::divine_revenge(int spell1, int spell2) {
    spell_lvl_1 = spell1;
    spell_lvl_2 = spell2;
    cout << "divine_revenge constructor(int, int)" << endl;
}

divine_revenge::~divine_revenge() {
    cout << "divine_revenge destructor" << endl;
}

void divine_revenge::conjure() {
    cout << "divine_revenge to conjure()" << endl;
}

void divine_revenge::using_magic() {
    cout << "divine_revenge using_magic()" << endl;
}

int divine_revenge::read_spell_lvl_2() {
    return spell_lvl_2;
}

int divine_revenge::read_spell_lvl_1() {
    return spell_lvl_1;
}

void divine_revenge::write_spell_level_1(int spell) {
    spell_lvl_1 = spell;
}

void divine_revenge::write_spell_level_2(int spell) {
    spell_lvl_2 = spell;
}
