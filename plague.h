//
// Created by Dima on 28.04.2020.
//

#ifndef UNTITLED1_ELECTRICITY_H
#define UNTITLED1_ELECTRICITY_H

#pragma once
#include "magic.h"

class plague : public magic {
public:
    plague();
    plague(int, int);
    ~plague();

    void conjure();
    void using_magic();
    int read_spell_lvl_1();
    int read_spell_lvl_2();
    void write_spell_level_1(int);
    void write_spell_level_2(int);
private:
    int spell_lvl_1;
    int spell_lvl_2;
};

#endif //UNTITLED1_ELECTRICITY_H
