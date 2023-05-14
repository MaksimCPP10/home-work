#include "Math_functions.h"
#include <iostream>

int main()
{
    setlocale(0, "");
    std::cout << "\n\t\tЗадача 1. Математические функции.\n";

	int a, b, choice;
	char answer;

	do
	{
		std::cout << "\nВведите первое число: ";
		std::cin >> a;
		std::cout << "\nВведите второе число: ";
		std::cin >> b;
		std::cout << "\nВыберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			std::cout << "\n" << a << " + " << b << " = " << add(a, b);
			break;
		case 2:
			std::cout << "\n" << a << " - " << b << " = " << subtract(a, b);
			break;
		case 3:
			std::cout << "\n" << a << " * " << b << " = " << multiply(a, b);
			break;
		case 4:
			if (b!=0)
			{
				std::cout << "\n" << a << " / " << b << " = " << divide(a, b);
			}
			else 
			{ 
				std::cout << "\nОшибка! На ноль делить нельзя!";
			}
			break;
		case 5:
			std::cout << "\n" << a << " в степени " << b << " = " << power(a, b);
			break;
		}

		std::cout << "\n\nЖелаете ещё выполнить какую-либо операцию? (y/n): ";
		std::cin >> answer;

	} while (answer != 'n');

	std::cout << "\nВсего доброго! До свидания!\n";
}

