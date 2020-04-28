//
// Created by Dima on 28.04.2020.
//

#ifndef UNTITLED1_PETROL_H
#define UNTITLED1_PETROL_H

#pragma once
#include "engines.h"

class petrol : public engines {
public:
    petrol();
    petrol(int, int);
    ~petrol();

    void do_something();
    void using_method();
    int get_data1();
    int get_data2();
    void set_data1(int);
    void set_data2(int);
private:
    int petrol_data1;
    int petrol_data2;
};


#endif //UNTITLED1_PETROL_H
