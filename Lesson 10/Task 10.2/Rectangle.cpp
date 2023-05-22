#include "Rectangle.h"

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(int a, int b)
{
    side_a = side_c = a;
    side_b = side_d = b;

    angle_A = angle_B = angle_C = angle_D = 90;

    figure_name = "Прямоугольник:";
}

std::string Rectangle::get_name()
{
    return figure_name;
}
