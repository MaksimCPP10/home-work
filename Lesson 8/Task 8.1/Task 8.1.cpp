#include <iostream>
#include <string>
#include <Windows.h>

int function(std::string str, int forbidden_length)
{
    if ((size(str)) == forbidden_length)
    {
        throw std::exception ("\nВы ввели слово запретной длины! До свидания.\n");
    }
    else
    {
        return size(str);
    }
}

int main()
{
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "\n\t\tЗадача 1. Простое исключение.\n";

    int str_length, forbidden_length;
    std::string str;
    
    std::cout << "\nВведите запретную длину: ";
    std::cin >> forbidden_length;

     do
     {
        std::cout << "\nВведите слово: ";
        std::cin >> str;

        try
        {
            str_length = function(str, forbidden_length);

            std::cout << "\nДлина слова \"" << str << "\" равна: " << str_length << "\n";

        }
        catch (const std::exception& ex)
        {
            std::cout << ex.what();
        }
     } while (size(str)!= forbidden_length);
}

