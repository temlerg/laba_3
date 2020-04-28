#include <iostream>
#include "engines.h"
#include "electricity.h"
#include "petrol.h"
#include "toyota_prius.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    cout << "Created a class electricity" << endl;
    electricity ele;
    ele.do_something();
    ele.using_method();
    cout << endl;

    cout << "Created an instance petrol" << endl;
    petrol pet;
    pet.do_something();
    pet.using_method();
    cout << endl;

    cout << "Create a parent class pointer engines" << endl;
    engines* eng = NULL;
    eng = &pet;
    eng->using_method();
    eng = &ele;
    eng->using_method();
    cout << endl;

    cout << "Created an instance toyota_prius" << endl;
    toyota_prius tp;
    tp.do_something();
    cout << endl << "Call using_method():" << endl;
    tp.using_method();
    cout << endl;

    return 0;
}
