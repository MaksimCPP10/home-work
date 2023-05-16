#include "Quadrilateral.h"

Quadrilateral::Quadrilateral()
{
}

Quadrilateral::Quadrilateral(int quantity_sides, int a, int b, int c, int d, int A, int B, int C, int D)
{
    if (quantity_sides != 4)
    {
        throw MyException("���������� ������ �� ����� 4");
    }
    else if ((A + B + C + D) != 360)
    {
        throw MyException("����� ����� �� ����� 360");
    }
    else
    {
        side_a = a;
        side_b = b;
        side_c = c;
        side_d = d;

        angle_A = A;
        angle_B = B;
        angle_C = C;
        angle_D = D;

        figure_name = "��������������";
    }
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
    std::cout << "\n" << get_name();
    std::cout << " (�������: " << get_side_a() << ", " << get_side_b() << ", " << get_side_c() << ", " << get_side_d() << "; ";
    std::cout << "����: " << get_angle_A() << ", " << get_angle_B() << ", " << get_angle_C() << ", " << get_angle_D() << ") ������.\n";
}