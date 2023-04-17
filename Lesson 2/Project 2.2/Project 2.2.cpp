#include <iostream>
#include <string>
#include <windows.h>

struct bank_account
{
    long int account_number;
    std::string holder_name;
    double balance;
};
void change_balance(bank_account& m, double new_balance) 
{
    m.balance = new_balance;
}

int main()
{
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "\n\t\tЗадача 2. Счета.\n";

    long int account;
    std::string name;
    double money, new_balance;

    std::cout << "\nВведите имя владельца счёта: ";
    std::cin >> name;
    std::cout << "\nВведите номер счёта: ";
    std::cin >> account;
    std::cout << "\nВведите баланс счёта: ";
    std::cin >> money;

    bank_account holder;
    holder.holder_name = name;
    holder.account_number = account;
    holder.balance = money;

    std::cout << "\nВведите новый баланс счёта: ";
    std::cin >> new_balance;

    change_balance(holder, new_balance);

    std::cout << "\nВаш счёт: " << holder.holder_name << ", " << holder.account_number << ", " << holder.balance << "\n";

}

