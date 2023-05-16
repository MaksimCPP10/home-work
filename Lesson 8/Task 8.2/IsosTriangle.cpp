#include "IsosTriangle.h"
#include "MyException.h"

IsosTriangle::IsosTriangle(int a, int b, int c, int A, int B, int C)
{
    if (a != c)
    {
        throw MyException("стороны \"a\" и \"c\" не равны");
    }
    else if (A != C)
    {
        throw MyException("углы \"A\" и \"C\" не равны");
    }
    else
    {
        side_a = a;
        side_b = b;
        side_c = c;

        angle_A = A;
        angle_B = B;
        angle_C = C;

        figure_name = "Равнобедренный треугольник";
    }
}

std::string IsosTriangle::get_name()
{
    return figure_name;
}