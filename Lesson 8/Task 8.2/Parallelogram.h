#pragma once
#include "Quadrilateral.h"
#include "MyException.h"

class Parallelogram : public Quadrilateral
{
public:
    Parallelogram();
    Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D);
    std::string get_name();
};

