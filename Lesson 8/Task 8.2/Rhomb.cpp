#include "Rhomb.h"

Rhomb::Rhomb(int a, int b, int c, int d, int A, int B, int C, int D)
{
    if (a != b && b != c && c != d && d != a)
    {
        throw MyException("������� \"a\", \"b\", \"c\" � \"d\" �� �����");
    }
    else if (A != C || B != D)
    {
        throw MyException("���� \"A\", \"C\" � \"B\", \"D\" ������� �� �����");
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

        figure_name = "����";
    }
}

std::string Rhomb::get_name()
{
    return figure_name;
}
