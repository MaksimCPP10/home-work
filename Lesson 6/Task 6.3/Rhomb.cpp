#include "Rhomb.h"

Rhomb::Rhomb(int a, int A, int B)
{
    side_a = side_b = side_c = side_d = a;

    angle_A = angle_C = A;
    angle_B = angle_D = B;

    figure_name = "Ромб:";
}

std::string Rhomb::get_name()
{
    return figure_name;
}
