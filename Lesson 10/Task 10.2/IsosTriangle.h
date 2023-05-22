#include "Triangle.h"
#pragma once

class IsosTriangle : public Triangle
{
public:
	IsosTriangle(int a, int b, int A, int B);
	std::string get_name();
};

