#pragma once
#include "Triangle.h"
#include "MyException.h"

class EquilTriangle : public Triangle
{
public:
	EquilTriangle(int a, int b, int c, int A, int B, int C);
	std::string get_name();
};

