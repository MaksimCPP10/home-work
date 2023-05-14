#include "Square.h"

Square::Square(int a)
{
    side_a = side_b = side_c = side_d = a;

    angle_A = angle_B = angle_C = angle_D = 90;

    figure_name = " вадрат: ";
}

std::string Square::get_name()
{
    return figure_name;
}
