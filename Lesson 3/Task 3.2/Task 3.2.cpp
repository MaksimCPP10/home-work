#include <iostream>
#include <string>
#include <windows.h>

class Counter
{
private:
    int counter;

public:
   Counter(){}
    Counter(int custom_counter) 
    {
        counter = custom_counter; 
    }
   
    void add()
    {
        counter++;
    }
    void subtract()
    {
        counter--;
    }
    void print_counter()
    {
        std::cout << "\n" << counter << "\n";
    }
};


int main()
{
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "\n\t\tЗадача 2. Счётчик.\n";

    int custom_counter=1;
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
    } while (choice!='х');

    std::cout << "\nВсего доброго! До свидания!\n";
}

