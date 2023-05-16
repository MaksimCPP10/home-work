#pragma once
#include "Parallelogram.h"
#include "MyException.h"

class Rhomb : public Parallelogram
{
public:
	Rhomb(int a, int b, int c, int d, int A, int B, int C, int D);
	std::string get_name();
};

