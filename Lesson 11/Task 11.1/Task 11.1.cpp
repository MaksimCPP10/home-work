#include <iostream>
#include <string>
#include <Windows.h>
#include "../StaticLIB/Greeter.h"

int main()
{
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "\n\t\tЗадача 1. Статическая библиотека.\n";

    std::string name;
    std::cout << "\nВведите Ваше имя: ";
    std::cin >> name;

    Greeter User;
    std::cout<<User.greet(name);

}