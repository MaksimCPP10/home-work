#include "EquilTriangle.h"

EquilTriangle::EquilTriangle(int a, int b, int c, int A, int B, int C)
{
	if (a != b && b != c && c != a)
	{
		throw MyException("������� \"a\", \"b\" � \"c\" �� �����");
	}
	else if (A != B && B != C && C != A)
	{
		throw MyException("���� \"A\", \"B\" � \"C\" �� �����");
	}
	else if (A != 60 && B != 60 && C != 60)
	{
		throw MyException("���� \"A\", \"B\" � \"C\" �� ����� 60");
	}
	else
	{
		side_a = a;
		side_b = b;
		side_c = c;

		angle_A = A;
		angle_B = B;
		angle_C = C;

		figure_name = "�������������� �����������";
	}
}

std::string EquilTriangle::get_name()
{
	return figure_name;
}
