//
// Created by Dima on 28.04.2020.
//

#include "electricity.h"
#include <iostream>

using namespace std;

electricity::electricity() {
    electricity_data1 = 0;
    electricity_data2 = 0;
    cout << "electricity constructor()" << endl;
}

electricity::electricity(int data1, int data2) {
    electricity_data1 = data1;
    electricity_data2 = data2;
    cout << "electricity constructor(int, int)" << endl;
}

electricity::~electricity() {
    cout << "electricity destructor" << endl;
}

void electricity::do_something() {
    cout << "electricity do_something()" << endl;
}

void electricity::using_method() {
    cout << "electricity using_method()" << endl;
}

int electricity::get_data1() {
    return(electricity_data1);
}

int electricity::get_data2() {
    return(electricity_data2);
}

void electricity::set_data1(int data) {
    electricity_data1 = data;
}

void electricity::set_data2(int data) {
    electricity_data2 = data;
}
