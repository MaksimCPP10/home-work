#include "Rectangle.h"
#pragma once

class Square : public Rectangle
{
public:
	Square(int a);
	std::string get_name();
};

