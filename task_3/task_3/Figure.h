#pragma once
#include <string>
#include <iostream>
class Figure {
protected:
    int sides_count;
    std::string name;
    int side_a, side_b, side_c, side_d;
    int angle_A, angle_B, angle_C, angle_D;

    Figure(int sides, const std::string& fig_name);

public:
    Figure();

    int get_side_a();
    int get_side_b();
    int get_side_c();
    int get_side_d();
    int get_angle_A();
    int get_angle_B();
    int get_angle_C();
    int get_angle_D();
    int get_sides_count();
    std::string get_name();
};
