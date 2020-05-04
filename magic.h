//
// Created by Dima on 28.04.2020.
//

#ifndef UNTITLED1_ENGINES_H
#define UNTITLED1_ENGINES_H
#pragma once

class magic {

public:
    void conjure();
    virtual void using_magic() = 0;

private:
    int magic_darkness;
    int magic_light;
};

#endif //UNTITLED1_ENGINES_H
