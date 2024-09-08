#include <string>
#include <Windows.h>
#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrangle.h"
#include "Rect.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

void print_info(Figure* fig) {
    std::cout << fig->get_name() << ": " << std::endl;

    if (fig->get_sides_count() == 3) {

        std::cout << "Стороны: " << "a=" << fig->get_side_a() << " b=" << fig->get_side_b() << " c=" << fig->get_side_c() << std::endl;
        std::cout << "Углы: " << "A=" << fig->get_angle_A() << " B=" << fig->get_angle_B() << " C=" << fig->get_angle_C() << std::endl;
        std::cout << std::endl;
    }
    else if (fig->get_sides_count() == 4) {

        std::cout << "Стороны: " << "a=" << fig->get_side_a() << " b=" << fig->get_side_b() << " c=" << fig->get_side_c() << " d=" << fig->get_side_d() << std::endl;
        std::cout << "Углы: " << "A=" << fig->get_angle_A() << " B=" << fig->get_angle_B() << " C=" << fig->get_angle_C() << " D=" << fig->get_angle_D() << std::endl;
        std::cout << std::endl;
    }
    else {
        std::cout << "Количество сторон: " << fig->get_sides_count() << std::endl;
        std::cout << std::endl;

    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Figure figure;
    Triangle triangle;
    Right_triangle right_triangle;
    Isosceles_triangle isosceles_triangle;
    Equilateral_triangle equilateral_triangle;
    Quadrangle quadrangle;
    Rect rectangle;
    Square square;
    Parallelogram parallelogram;
    Rhombus rhombus;

    print_info(&figure);
    print_info((Figure*)&right_triangle);
    print_info((Figure*)&isosceles_triangle);
    print_info((Figure*)&equilateral_triangle);
    print_info((Figure*)&rectangle);
    print_info((Figure*)&square);
    print_info((Figure*)&parallelogram);
    print_info((Figure*)&rhombus);

    return 0;
}