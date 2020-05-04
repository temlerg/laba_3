//
// Created by Dima on 28.04.2020.
//

#include "plague_divine_revenge.h"
#include <iostream>

using namespace std;

plague_divine_revenge::plague_divine_revenge() {
    spell_lvl_1 = 0;
    spell_lvl_2 = 0;
    cout << "plague_divine_revenge constructor()" << endl;
}

plague_divine_revenge::plague_divine_revenge(int spell1, int spell2) {
    spell_lvl_1 = spell1;
    spell_lvl_2 = spell2;
    cout << "plague_divine_revenge constructor(int, int)" << endl;
}

plague_divine_revenge::~plague_divine_revenge() {
    cout << "plague_divine_revenge destructor" << endl;
}

void plague_divine_revenge::conjure() {
    cout << "plague_divine_revenge to conjure()" << endl;
}

void plague_divine_revenge::using_magic() {
    spell_divine_revenge.using_magic();
    spell_plague.using_magic();
}

int plague_divine_revenge::read_spell_lvl_1() {
    return spell_lvl_1;
}

int plague_divine_revenge::read_spell_lvl_2() {
    return spell_lvl_2;
}

void plague_divine_revenge::write_spell_level_1(int spell) {
    spell_lvl_1 = spell;
}

void plague_divine_revenge::write_spell_level_2(int spell) {
    spell_lvl_2 = spell;
}