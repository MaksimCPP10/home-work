#include "Figure.h"
#pragma once

class Triangle: public Figure
{
protected:
    int side_a;
    int side_b;
    int side_c;

    int angle_A;
    int angle_B;
    int angle_C;

public:
    Triangle();
    Triangle(int a, int b, int c, int A, int B, int C);
    std::string get_name();
    int get_side_a();
    int get_side_b();
    int get_side_c();
    int get_angle_A();
    int get_angle_B();
    int get_angle_C();
    void print_myself() override;
};

