#include <iostream>

enum months
{
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
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
        case months::January:
            std::cout << "January/Январь";
            break;
        case months::February:
            std::cout << "February/Февраль";
            break;
        case months::March:
            std::cout << "March/Март";
            break;
        case months::April:
            std::cout << "April/Апрель";
            break;
        case months::May:
            std::cout << "May/Май";
            break;
        case months::June:
            std::cout << "June/Июнь";
            break;
        case months::July:
            std::cout << "July/Июль";
            break;
        case months::August:
            std::cout << "August/Август";
            break;
        case months::September:
            std::cout << "September/Сентябрь";
            break;
        case months::October:
            std::cout << "October/Октябрь";
            break;
        case months::November:
            std::cout << "November/Ноябрь";
            break;
        case months::December:
            std::cout << "December/Декабрь";
            break;
        };

    } while (number != 0);

    std::cout << "\nВсего доброго! До свидания!\n";

}