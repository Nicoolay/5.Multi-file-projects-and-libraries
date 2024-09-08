#include "Figure.h"
#include <iostream>
Figure::Figure(int sides, const std::string& fig_name)
    : sides_count(sides), name(fig_name), side_a(0), side_b(0), side_c(0), side_d(0),
    angle_A(0), angle_B(0), angle_C(0), angle_D(0) {}

Figure::Figure() : Figure(0, "Фигура") {}

int Figure::get_side_a() { return side_a; }
int Figure::get_side_b() { return side_b; }
int Figure::get_side_c() { return side_c; }
int Figure::get_side_d() { return side_d; }
int Figure::get_angle_A() { return angle_A; }
int Figure::get_angle_B() { return angle_B; }
int Figure::get_angle_C() { return angle_C; }
int Figure::get_angle_D() { return angle_D; }
int Figure::get_sides_count() { return sides_count; }
std::string Figure::get_name() { return name; }
