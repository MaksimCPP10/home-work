#include "Triangle.h"

Triangle::Triangle()
{
}

Triangle::Triangle(int a, int b, int c, int A, int B, int C)
{
    side_a = a;
    side_b = b;
    side_c = c;

    angle_A = A;
    angle_B = B;
    angle_C = C;

    figure_name = "Треугольник";

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
    std::cout << "\n" << get_name() << "\n";
    std::cout << "Стороны:" << " a=" << get_side_a() << " b=" << get_side_b() << " c=" << get_side_c() << "\n";
    std::cout << "Углы:" << " A=" << get_angle_A() << " B=" << get_angle_B() << " C=" << get_angle_C() << "\n";
}
