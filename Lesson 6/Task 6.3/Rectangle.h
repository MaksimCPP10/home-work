#include "Parallelogram.h"
#pragma once

class Rectangle : public Parallelogram
{
public:
    Rectangle();
    Rectangle(int a, int b);
    std::string get_name();
};

