#pragma once
#include "Triangle.h"

class IsosTriangle : public Triangle
{
public:
	IsosTriangle(int a, int b, int c, int A, int B, int C);
	std::string get_name();
};

