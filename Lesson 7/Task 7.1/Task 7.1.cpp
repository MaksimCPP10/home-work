#include <iostream>
#define MODE 1

int main()
{
    setlocale(0, "");
    std::cout << "\n\t\tЗадача 1. Препроцессорные директивы.\n";

    int a, b;

#ifndef MODE
#error MODE is not defined
#endif

#if MODE == 0
    std::cout << "\nРаботаю в режиме тренировки.\n";
#elif MODE == 1
#define add(a,b)((a)+(b))
    std::cout << "\nРаботаю в боевом режиме.\n";
    std::cout << "\nВведите число 1: ";
    std::cin >> a;
    std::cout << "\nВведите число 2: ";
    std::cin >> b;
    std::cout << "\nРезультат сложения: " << add(a, b) << "\n";
#else 
    std::cout << "\nНеизвестный режим. Завершение работы.\n";
#endif
}

