//
// Created by Dima on 28.04.2020.
//

#ifndef UNTITLED1_TOYOTA_PRIUS_H
#define UNTITLED1_TOYOTA_PRIUS_H

#pragma once

#include "electricity.h"
#include "petrol.h"

class toyota_prius : public petrol, public electricity {
public:
    toyota_prius();

    toyota_prius(int, int);

    ~toyota_prius();

    void do_something();

    void using_method();

    int get_data1();

    int get_data2();

    void set_data1(int);

    void set_data2(int);

private:
    int tp_data1;
    int tp_data2;
    petrol pet;
    electricity ele;
};



#endif //UNTITLED1_TOYOTA_PRIUS_H
