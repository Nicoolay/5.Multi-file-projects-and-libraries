#include "Quadrangle.h"

Quadrangle::Quadrangle(int sides, const std::string& fig_name, int a, int b, int c, int d, int A, int B, int C, int D)
    : Figure(sides, fig_name) {
    side_a = a;
    side_b = b;
    side_c = c;
    side_d = d;
    angle_A = A;
    angle_B = B;
    angle_C = C;
    angle_D = D;
}

Quadrangle::Quadrangle() : Quadrangle(4, "Четырёхугольник", 10, 20, 30, 40, 50, 60, 70, 80) {}
