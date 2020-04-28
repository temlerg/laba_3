//
// Created by Dima on 28.04.2020.
//

#ifndef UNTITLED1_ENGINES_H
#define UNTITLED1_ENGINES_H
#pragma once

class engines {

public:
    void do_something();
    virtual void using_method() = 0;

private:
    int engines_data1;
    int engines_data2;
};

#endif //UNTITLED1_ENGINES_H
