//
// Created by Dima on 28.04.2020.
//

#include "toyota_prius.h"
#include <iostream>

using namespace std;

toyota_prius::toyota_prius() {
    tp_data1 = 0;
    tp_data2 = 0;
    cout << "toyota_prius constructor()" << endl;
}

toyota_prius::toyota_prius(int data1, int data2) {
    tp_data1 = data1;
    tp_data2 = data2;
    cout << "toyota_prius constructor(int, int)" << endl;
}

toyota_prius::~toyota_prius() {
    cout << "toyota_prius destructor" << endl;
}

void toyota_prius::do_something() {
    cout << "toyota_prius do_something()" << endl;
}

void toyota_prius::using_method() {
    pet.using_method();
    ele.using_method();
}

int toyota_prius::get_data1() {
    return(tp_data1);
}

int toyota_prius::get_data2() {
    return(tp_data2);
}

void toyota_prius::set_data1(int data) {
    tp_data1 = data;
}

void toyota_prius::set_data2(int data) {
    tp_data2 = data;
}