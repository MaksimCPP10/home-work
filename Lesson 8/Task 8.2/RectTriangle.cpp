#include "RectTriangle.h"
#include "MyException.h"

RectTriangle::RectTriangle(int a, int b, int c, int A, int B, int C)
{
    if (C != 90)
    {
        throw MyException ("угол С не равен 90");
    }
    else
    {
    side_a = a;
    side_b = b;
    side_c = c;

    angle_A = A;
    angle_B = B;
    angle_C = C;

    figure_name = "Прямоугольный треугольник";
    }
}

std::string RectTriangle::get_name()
{
    return figure_name;
}
