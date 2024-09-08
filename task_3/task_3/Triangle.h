#pragma once
#include <string>
#include <iostream>
#include "Figure.h"


class Triangle : protected Figure {
protected:
    Triangle(int sides, const std::string& fig_name, int a, int b, int c, int A, int B, int C);

public:
    Triangle();
};