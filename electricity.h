//
// Created by Dima on 28.04.2020.
//

#ifndef UNTITLED1_ELECTRICITY_H
#define UNTITLED1_ELECTRICITY_H

#pragma once
#include "engines.h"

class electricity : public engines {
public:
    electricity();
    electricity(int, int);
    ~electricity();

    void do_something();
    void using_method();
    int get_data1();
    int get_data2();
    void set_data1(int);
    void set_data2(int);
private:
    int electricity_data1;
    int electricity_data2;
};

#endif //UNTITLED1_ELECTRICITY_H
