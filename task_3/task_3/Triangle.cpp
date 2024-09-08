
#include <string>
#include <iostream>
#include "Triangle.h"


Triangle::Triangle(int sides, const std::string& fig_name, int a, int b, int c, int A, int B, int C)
    : Figure(sides, fig_name) {
    side_a = a;
    side_b = b;
    side_c = c;
    angle_A = A;
    angle_B = B;
    angle_C = C;
}

Triangle::Triangle() : Triangle(3, "Треугольник", 10, 20, 30, 50, 60, 70) {}