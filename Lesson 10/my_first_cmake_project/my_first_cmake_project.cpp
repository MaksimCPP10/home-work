#include "my_first_cmake_project.h"
#include <string>
#include <Windows.h>

int main()
{
	setlocale(0, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "\n\t\tЗадача 1. Простейший проект.\n";

	std::string name;
	std::cout << "\nВведите Ваше имя: ";
	std::cin >> name;
	std::cout << "\nЗдравствуйте, " << name << "!\n";
	
}
