#pragma once
#include <iostream>

class Counter {
private:
    double num1;

public:
    Counter(double set_calc = 1);

    double add();
    double subtract();
    void get_num() ;
};