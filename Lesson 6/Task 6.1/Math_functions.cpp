#include "Math_functions.h"

int add(int a, int b)
{
	return a+b;
}

int subtract(int a, int b)
{
	return a-b;
}

int multiply(int a, int b)
{
	return a*b;
}

int divide(int a, int b)
{
	if (!b)
	{
		std::cout << "\nОшибка! На ноль делить нельзя!\n";
	}
	else
	{
		return a / b;
	}
}

int power(int a, int b)
{
	int result = a;
	for (int i = 1; i < b; i++)
	{
		result *= a;
	}
	return result;
}
