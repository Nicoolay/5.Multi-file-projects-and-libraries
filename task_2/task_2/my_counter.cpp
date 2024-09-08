#include <iostream>
#include <string>
#include "my_counter.h"

Counter::Counter(double set_calc) : num1{ set_calc } {}

double Counter::add() {
    return num1++;
}

double Counter::subtract() {
    return num1--;
}
void Counter::get_num()  {
    std::cout << num1 << std::endl;
}