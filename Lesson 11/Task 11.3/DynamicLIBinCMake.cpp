#include <iostream>
#include <string>
#include <Windows.h>
#include "../DynamicLIB/Leaver.h"

int main()
{
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "\n\t\t������ 3. ������������ ���������� CMake.\n";

    std::string name;
    std::cout << "\n������� ���� ���: ";
    std::cin >> name;

    Leaver User;
    std::cout << User.leave(name);

}