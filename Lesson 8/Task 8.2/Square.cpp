#include "Square.h"

Square::Square(int a, int b, int c, int d, int A, int B, int C, int D)
{
    if (a != b && b != c && c != d && d != a)
    {
        throw MyException("стороны \"a\", \"b\", \"c\" и \"d\" не равны");
    }
    else if (A != B && B != C && C != D && D != A)
    {
        throw MyException("углы \"A\", \"B\", \"C\" и \"D\" не равны");
    }
    else if (A != 90 && B != 90 && C != 90 && D != 90)
    {
        throw MyException("углы \"A\", \"B\", \"C\" и \"D\" не равны 90");
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

        figure_name = "Квадрат";
    }
}

std::string Square::get_name()
{
    return figure_name;
}
