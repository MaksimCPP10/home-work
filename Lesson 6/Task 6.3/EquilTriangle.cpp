#include "EquilTriangle.h"

EquilTriangle::EquilTriangle(int a)
{
	side_a = side_b = side_c = a;

	angle_A = angle_B = angle_C = 60;

	figure_name = "Равносторонний треугольник:";
}

std::string EquilTriangle::get_name()
{
	return figure_name;
}
