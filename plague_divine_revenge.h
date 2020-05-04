//
// Created by Dima on 28.04.2020.
//

#ifndef UNTITLED1_TOYOTA_PRIUS_H
#define UNTITLED1_TOYOTA_PRIUS_H

#pragma once

#include "plague.h"
#include "divine_revenge.h"

class plague_divine_revenge : public divine_revenge, public plague {
public:
    plague_divine_revenge();

    plague_divine_revenge(int, int);

    ~plague_divine_revenge();

    void conjure();

    void using_magic();

    int read_spell_lvl_1();
    int read_spell_lvl_2();
    void write_spell_level_1(int);
    void write_spell_level_2(int);
private:
    int spell_lvl_1;
    int spell_lvl_2;
    divine_revenge spell_divine_revenge;
    plague spell_plague;
};



#endif //UNTITLED1_TOYOTA_PRIUS_H
