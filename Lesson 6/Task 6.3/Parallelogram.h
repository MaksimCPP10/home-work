#include "Quadrilateral.h"
#pragma once

class Parallelogram : public Quadrilateral
{
public:
    Parallelogram();
    Parallelogram(int a, int b, int A, int B);
    std::string get_name();
};

