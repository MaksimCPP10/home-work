#include <iostream>
#pragma once

class Figure
{
protected:
    int quantity_sides;
    std::string figure_name;

public:
    virtual void print_myself() = 0;
};
