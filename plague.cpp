//
// Created by Dima on 28.04.2020.
//

#include "plague.h"
#include <iostream>

using namespace std;

plague::plague() {
    spell_lvl_1 = 0;
    spell_lvl_2 = 0;
    cout << "plague constructor()" << endl;
}

plague::plague(int spell1, int spell2) {
    spell_lvl_1 = spell1;
    spell_lvl_2 = spell2;
    cout << "plague constructor(int, int)" << endl;
}

plague::~plague() {
    cout << "plague destructor" << endl;
}

void plague::conjure() {
    cout << "plague to conjure()" << endl;
}

void plague::using_magic() {
    cout << "plague using_magic()" << endl;
}

int plague::read_spell_lvl_1() {
    return (spell_lvl_1);
}

int plague::read_spell_lvl_2() {
    return (spell_lvl_2);
}

void plague::write_spell_level_1(int spell) {
    spell_lvl_1 = spell;
}

void plague::write_spell_level_2(int spell) {
    spell_lvl_2 = spell;
}
