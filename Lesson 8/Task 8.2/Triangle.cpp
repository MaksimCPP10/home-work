#include "Triangle.h"
#include "MyException.h"

Triangle::Triangle()
{
}

Triangle::Triangle(int quantity_sides, int a, int b, int c, int A, int B, int C)
{
    if (quantity_sides != 3)
    {
        throw MyException("количество сторон не равно 3");
    }
    else if ((A + B + C) != 180)
    {
        throw MyException("сумма углов не равна 180");
    }
    else
    {
    side_a = a;
    side_b = b;
    side_c = c;

    angle_A = A;
    angle_B = B;
    angle_C = C;

    figure_name = "Треугольник";
    }
}
std::string Triangle::get_name()
{
    return figure_name;
}
int Triangle::get_side_a()
{
    return side_a;
}

int Triangle::get_side_b()
{
    return side_b;
}

int Triangle::get_side_c()
{
    return side_c;
}

int Triangle::get_angle_A()
{
    return angle_A;
}

int Triangle::get_angle_B()
{
    return angle_B;
}

int Triangle::get_angle_C()
{
    return angle_C;
}

void Triangle::print_myself()
{
    std::cout << "\n" << get_name();
    std::cout << " (стороны: " << get_side_a() << ", " << get_side_b() << ", " << get_side_c() << "; ";
    std::cout << "углы: " << get_angle_A() << ", " << get_angle_B() << ", " << get_angle_C() << ") создан.\n";
}