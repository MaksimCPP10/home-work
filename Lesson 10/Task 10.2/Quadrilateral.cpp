#include "Quadrilateral.h"

Quadrilateral::Quadrilateral()
{
}

Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D)
{
    side_a = a;
    side_b = b;
    side_c = c;
    side_d = d;

    angle_A = A;
    angle_B = B;
    angle_C = C;
    angle_D = D;

    figure_name = "Четырёхугольник:";
}

std::string Quadrilateral::get_name()
{
    return figure_name;
}

int Quadrilateral::get_side_a()
{
    return side_a;
}

int Quadrilateral::get_side_b()
{
    return side_b;
}

int Quadrilateral::get_side_c()
{
    return side_c;
}

int Quadrilateral::get_side_d()
{
    return side_d;
}

int Quadrilateral::get_angle_A()
{
    return angle_A;
}

int Quadrilateral::get_angle_B()
{
    return angle_B;
}

int Quadrilateral::get_angle_C()
{
    return angle_C;
}

int Quadrilateral::get_angle_D()
{
    return angle_D;
}

void Quadrilateral::print_myself()
{
    std::cout << "\n" << get_name() << "\n";
    std::cout << "Стороны:" << " a=" << get_side_a() << " b=" << get_side_b() << " c=" << get_side_c() << " d=" << get_side_d() << "\n";
    std::cout << "Углы:" << " A=" << get_angle_A() << " B=" << get_angle_B() << " C=" << get_angle_C() << " D=" << get_angle_D() << "\n";
}
