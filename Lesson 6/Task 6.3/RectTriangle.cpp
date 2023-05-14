#include "RectTriangle.h"

RectTriangle::RectTriangle(int a, int b, int c, int A, int B)
{
    side_a = a;
    side_b = b;
    side_c = c;

    angle_A = A;
    angle_B = B;
    angle_C = 90;

    figure_name = "Прямоугольный треугольник:";
}

std::string RectTriangle::get_name()
{
    return figure_name;
}
