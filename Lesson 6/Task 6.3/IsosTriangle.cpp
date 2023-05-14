#include "IsosTriangle.h"

IsosTriangle::IsosTriangle(int a, int b, int A, int B)
{
    side_a = side_c = a;
    side_b = b;

    angle_A = angle_C = A;
    angle_B = B;

    figure_name = "Равнобедренный треугольник:";
}

std::string IsosTriangle::get_name()
{
    return figure_name;
}
