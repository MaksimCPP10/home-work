#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>

class Address
{
private:
    std::string city;
    std::string street;
    int house;
    int flat;

public:
    Address(std::string city_name, std::string street_name, int house_number, int flat_number)
    {
        city = city_name;
        street = street_name;
        house = house_number;
        flat = flat_number;
    }
    std::string get_output_address(std::string address)
    {
       std::string add_address = city + ", " + street + ", " + std::to_string(house) + ", " + std::to_string(flat);
        return add_address;
    }
};

int main()
{
    setlocale(LC_ALL, "Ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "\n\t\tЗадача 1. Адреса.\n";

    int size;
    std::string city_name, street_name;
    int house_number, flat_number;

    std::ifstream fin;
    fin.open("in.txt");
    if (!fin.is_open())
    {
        std::cout << "\nОшибка открытия файла \"in.txt\"!";
    };
    fin >> size;

    std::cout << "\n\tФайл \"in.txt\".\n";
    std::cout << size<<"\n";

    std::string* add_address = new std::string [size];

    setlocale(LC_ALL, "ru_RU.UTF-8");
    for (int i = 0; i < size; i++)
    {
        fin >> city_name >> street_name >> house_number >> flat_number;
        std::cout << city_name << "\n" << street_name << "\n" << house_number << "\n" << flat_number << "\n";

        Address address(city_name, street_name, house_number, flat_number);

        add_address[i] = address.get_output_address(*add_address);
    }

    std::ofstream fout("out.txt");

    setlocale(LC_ALL, "Ru");

    std::cout << "\n\tФайл \"out.txt\".\n";
    std::cout << size << "\n";

    fout << size<<"\n";

    setlocale(LC_ALL, "ru_RU.UTF-8");
    for (int i = size-1; i >= 0; i--)
    {
        fout << add_address[i] << "\n";
        std::cout << add_address[i] << "\n";
    }
 
    std::cout << "\n";

    fin.close();

    delete[] add_address;

}

