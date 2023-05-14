#include "Counter.h"
#include <iostream>
#include <string>
#include <Windows.h>


int main()
{
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "\n\t\tЗадача 2. Класс.\n";

    int custom_counter = 1;
    std::string answer;
    char choice;

    std::cout << "\nВы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> answer;
    if (answer == "да")
    {
        std::cout << "\nВведите начальное значение счётчика: ";
        std::cin >> custom_counter;
    }

    Counter count(custom_counter);

    do
    {
        std::cout << "\nВведите команду ('+', '-', '=' или 'x' - для завершения): ";
        std::cin >> choice;
        switch (choice)
        {
        case '+':
            count.add();
            break;
        case '-':
            count.subtract();
            break;
        case '=':
            count.print_counter();
            break;
        }
    } while (choice != 'х');

    std::cout << "\nВсего доброго! До свидания!\n";
}

