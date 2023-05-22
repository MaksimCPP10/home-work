#include "Parallelogram.h"

Parallelogram::Parallelogram()
{
}

Parallelogram::Parallelogram(int a, int b, int A, int B)
{
    side_a = side_c = a;
    side_b = side_d = b;

    angle_A = angle_C = A;
    angle_B = angle_D = B;

    figure_name = "ֿאנאככוכמדנאלל:";
}

std::string Parallelogram::get_name()
{
    return figure_name;
}
