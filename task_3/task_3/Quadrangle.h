#pragma once
#include <string>
#include <iostream>
#include "Figure.h"

class Quadrangle : protected Figure {
protected:
    Quadrangle(int sides, const std::string& fig_name, int a, int b, int c, int d, int A, int B, int C, int D);
    

public:
    Quadrangle();

};
