#pragma once
#include "Parallelogram.h"
#include "MyException.h"

class Rectangle : public Parallelogram
{
public:
    Rectangle();
    Rectangle(int a, int b, int c, int d, int A, int B, int C, int D);
    std::string get_name();
};

