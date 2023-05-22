#include "Figure.h"
#pragma once

class Quadrilateral : public Figure
{
protected:
    int side_a;
    int side_b;
    int side_c;
    int side_d;

    int angle_A;
    int angle_B;
    int angle_C;
    int angle_D;

public:
    Quadrilateral();
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
    std::string get_name();
    int get_side_a();
    int get_side_b();
    int get_side_c();
    int get_side_d();
    int get_angle_A();
    int get_angle_B();
    int get_angle_C();
    int get_angle_D();
    void print_myself() override;
};

