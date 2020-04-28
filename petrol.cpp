//
// Created by Dima on 28.04.2020.
//

#include "petrol.h"
#include <iostream>

using namespace std;

petrol::petrol() {
    petrol_data1 = 0;
    petrol_data2 = 0;
    cout << "petrol constructor()" << endl;
}

petrol::petrol(int data1, int data2) {
    petrol_data1 = data1;
    petrol_data2 = data2;
    cout << "petrol constructor(int, int)" << endl;
}

petrol::~petrol() {
    cout << "petrol destructor" << endl;
}

void petrol::do_something() {
    cout << "petrol do_something()" << endl;
}

void petrol::using_method() {
    cout << "petrol using_method()" << endl;
}

int petrol::get_data1() {
    return(petrol_data1);
}

int petrol::get_data2() {
    return(petrol_data2);
}

void petrol::set_data1(int data) {
    petrol_data1 = data;
}

void petrol::set_data2(int data) {
    petrol_data2 = data;
}
