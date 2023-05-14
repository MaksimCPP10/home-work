#include <iostream>
#pragma once

class Figure
{
protected:
    std::string figure_name;

public:
    virtual void print_myself() = 0;
};

