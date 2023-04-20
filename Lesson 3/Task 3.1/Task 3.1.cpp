#include <iostream>
#include <string>
#include <windows.h>

class Calculator
{
public:
    double num1;
    double num2;

    double add()
    {
        std::cout << "\n" << num1 << " + " << num2 << " = ";
        return num1 + num2;
    }
    double multiply()
    {
        std::cout << "\n" << num1 << " * " << num2 << " = ";
        return num1* num2;
    }
    double subtract_1_2()
    {
        std::cout << "\n" << num1 << " - " << num2 << " = ";
        return num1 - num2;
    }
    double subtract_2_1()
    {
        std::cout << "\n" << num2 << " - " << num1 << " = ";
        return num2 - num1;
    }
    double divide_1_2()
    {
        std::cout << "\n" << num1 << " / " << num2 << " = ";
        return num1 / num2;
    }
    double divide_2_1()
    {
        std::cout << "\n" << num2 << " / " << num1 << " = ";
        return num2 / num1;
    }
    bool set_num1(double num1)
    {
        if (num1!=0) {
            this->num1 = num1;
            return num1;
        }
    }
    bool set_num2(double num2)
    {
        if (num2!=0) {
            this->num2 = num2;
            return num2;
        }
    }
};

void Error(int num)
{
    if (!num){std::cout<< "\n\"0\" - является недопустимым значением!\n";}
}

int main()
{
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "\n\t\tЗадача 1. Калькулятор двух чисел.\n";
    
    double num1, num2;
    std::string answer;

    Calculator result;

    do
    {

    do
    {
        std::cout << "\nВведите 1-ое число: ";
        std::cin >> num1;
        result.set_num1(num1);
        Error(num1);
    } while (!num1);

    do
    {
        std::cout << "\nВведите 2-ое число: ";
        std::cin >> num2;
        result.set_num2(num2);
        Error(num2);
    } while (!num2);

    std::cout << result.add();

    std::cout << result.multiply();

    std::cout << result.subtract_1_2();

    std::cout << result.subtract_2_1();

    std::cout << result.divide_1_2();

    std::cout << result.divide_2_1();

    std::cout << "\n\nЖелаете ввести ещё одну пару чисел для вычисления? (да/нет): ";
    std::cin >> answer;

    } while (answer !="нет");

    std::cout << "\nВсего доброго! До свидания!\n";

}