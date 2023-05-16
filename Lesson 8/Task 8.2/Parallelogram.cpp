#include "Parallelogram.h"

Parallelogram::Parallelogram()
{
}

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D)
{
    if (a != c || b != d)
    {
        throw MyException("стороны \"a\", \"c\" и \"b\", \"d\" попарно не равны");
    }
    else if (A != C || B != D)
    {
        throw MyException("углы \"A\", \"C\" и \"B\", \"D\" попарно не равны");
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

        figure_name = "Параллелограмм";
    }
}

std::string Parallelogram::get_name()
{
    return figure_name;
}
