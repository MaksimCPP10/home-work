#include "Triangle.h"
#pragma once

class RectTriangle : public Triangle
{
public:
	RectTriangle(int a, int b, int c, int A, int B);
	std::string get_name();
};

