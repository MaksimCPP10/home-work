#include <iostream>

enum months
{
    Январь = 1,
    Февраль,
    Март,
    Апрель,
    Май,
    Июнь,
    Июль,
    Август,
    Сентябрь,
    Октябрь,
    Ноябрь,
    Декабрь
};

int main()
{
    int number;
    setlocale(0, "");
    std::cout << "\n\t\tЗадача 1. Месяцы.\n";
    do
    {
        std::cout << "\n\nВведите номер месяца (0 для завершения): ";
        std::cin >> number;
        if (number < 0 || number>12)
        {
            std::cout << "\nВведите корректный номер месяца (от 1 до 12)";
        }
        months month = static_cast<months>(number);
        switch (month)
        {
        case 1:
            std::cout << "Январь";
            break;
        case 2:
            std::cout << "Февраль";
            break;
        case 3:
            std::cout << "Март";
            break;
        case 4:
            std::cout << "Апрель";
            break;
        case 5:
            std::cout << "Май";
            break;
        case 6:
            std::cout << "Июнь";
            break;
        case 7:
            std::cout << "Июль";
            break;
        case 8:
            std::cout << "Август";
            break;
        case 9:
            std::cout << "Сентябрь";
            break;
        case 10:
            std::cout << "Октябрь";
            break;
        case 11:
            std::cout << "Ноябрь";
            break;
        case 12:
            std::cout << "Декабрь";
            break;
        };

    } while (number != 0);

}