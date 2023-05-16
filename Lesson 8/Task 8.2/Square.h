#pragma once
#include "Rectangle.h"
#include "MyException.h"

class Square : public Rectangle
{
public:
	Square(int a, int b, int c, int d, int A, int B, int C, int D);
	std::string get_name();
};

