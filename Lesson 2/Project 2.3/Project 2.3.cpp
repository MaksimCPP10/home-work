#include <iostream>
#include <string>
#include <windows.h>

struct home_address
{
    std::string city_name;
    std::string street_name;
    int house_number;
    int flat_number;
    long int index_number;
};

void print_structur(home_address& a)
{
    std::cout << "\n\n\tВаш адрес:\n";
    std::cout << "\nГород: "<<a.city_name;
    std::cout << "\nУлица: " << a.street_name;
    std::cout << "\nНомер дома: " << a.house_number;
    std::cout << "\nНомер квартиры: " << a.flat_number;
    std::cout << "\nИндекс: " << a.index_number << "\n";
}

int main()
{
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "\n\t\tЗадача 3. Вывод структуры.\n\n";

    std::string city, street;
    int house, flat;
    long int index;

    std::cout << "Введите название города: ";
    std::cin >> city;
    std::cout << "Введите название улицы: ";
    std::cin >> street;
    std::cout << "Введите номер дома: ";
    std::cin >> house;
    std::cout << "Введите номер квартиры: ";
    std::cin >> flat;
    std::cout << "Введите индекс: ";
    std::cin >> index;

    home_address address;
    address.city_name = city;
    address.street_name = street;
    address.house_number = house;
    address.flat_number = flat;
    address.index_number = index;

    print_structur(address);

}
