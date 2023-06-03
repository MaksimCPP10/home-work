#include <iostream>
#include "../Transport_vehicles/Vehicles.h"

enum vehicles
{
    Boots_all_terrain = 1,
    Camel,
    Centaur,
    Camel_fast,
    Eagle,
    Magic_сarpet,
    Broom
};

int main()
{
    setlocale(0, "");
    std::cout << "\n\t\t\tКурсовой проект «Симулятор гонок».\n";

    int choice, distance, action, choice_vehicle, consummation, quantity_vehicles=0;

    std::cout << "\n\tДобро пожаловать в гоночный симулятор!\n\n";
    std::cout << "1. Гонка для наземного транспорта.\n";
    std::cout << "2. Гонка для воздушного транспорта.\n";
    std::cout << "3. Гонка для наземного и воздушного транспорта.\n";
    do
    {
        std::cout << "\nВыберите тип гонки: ";
        std::cin >> choice;
        if (choice < 1 || choice>3) { std::cout << "\a\nВыберите число от 1 до 3!!!\n"; }
    } while (choice < 1 || choice>3);
    do
    {
        std::cout << "\nУкажите длину дистанции (дистанция должна быть положительна): ";
        std::cin >> distance;
        if (distance <= 0) { std::cout << "\a\nДистанция должна быть положительна!!!\n"; }
    } while (distance <= 0);
    do
    {
        std::cout << "\nДолжно быть зарегистрировано хотябы 2 транспортных средства.\n\n";
        std::cout << "1. Зарегистрировать транспорт.\n";
        do
        {
            std::cout << "\nВыберите действие: ";
            std::cin >> action;
            if (action != 1) { std::cout << "\a"; }
        } while (action != 1);

        switch (choice)
        {
        case 1:
            std::cout << "\nГонка для наземного транспорта. Расстояние: " << distance << ".\n";
            break;
        case 2:
            std::cout << "\nГонка для воздушного транспорта. Расстояние: " << distance << ".\n";
            break;
        case 3:
            std::cout << "\nГонка для наземного и воздушного транспорта. Расстояние: " << distance << ".\n";
            break;
        }
        
            std::cout << "1. Ботинки-вездеходы.\n";
            std::cout << "2. Верблюд.\n";
            std::cout << "3. Кентавр.\n";
            std::cout << "4. Верблюд-быстроход.\n";
            std::cout << "5. Орёл.\n";
            std::cout << "6. Ковёр-самолёт.\n";
            std::cout << "7. Метла.\n";
            std::cout << "0. Закончить регистрацию.\n";
        /*
        // продумать реализацию обработки исключения попытки зарегистрировать неправильный тип транспортного средства
            do
         {
            std::cout << "\nВыберите транспорт или нажмите \"0\" для окончания регистрации: ";

            std::cin >> choice_vehicle;
            if ((choice == 1 && choice_vehicle > 4) || (choice == 2 && choice_vehicle < 5))
            {
                std::cout << "\a\nПопытка зарегистрировать неправильный тип транспортного средства!\n";
            }
         } while ((choice == 1 && choice_vehicle > 4) || (choice == 2 && choice_vehicle < 5)  && (choice_vehicle!=0));
         */
        vehicles vehicle = static_cast<vehicles>(choice_vehicle);

        switch (vehicle)
        {
        case vehicles::Boots_all_terrain:
            //завести экземпляр класса Boots_all_terrain с параметром(distance)
            std::cout << "\nБотинки-вездеходы успешно зарегистрирован!\n";
            break;
        case vehicles::Camel:
            //завести экземпляр класса Camel с параметром(distance)
            std::cout << "\nВерблюд успешно зарегистрирован!\n";
            break;
        case vehicles::Centaur:
            //завести экземпляр класса Centaur с параметром(distance)
            std::cout << "\nКентавр успешно зарегистрирован!\n";
            break;
        case vehicles::Camel_fast:
            //завести экземпляр класса Camel_fast с параметром(distance)
            std::cout << "\nВерблюд-быстроход успешно зарегистрирован!\n";
            break;
        case vehicles::Eagle:
            //завести экземпляр класса Eagle с параметром(distance)
            std::cout << "\nОрёл успешно зарегистрирован!\n";
            break;
        case vehicles::Magic_сarpet:
            //завести экземпляр класса Magic_сarpet с параметром(distance)
            std::cout << "\nКовёр-самолёт успешно зарегистрирован!\n";
            break;
        case vehicles::Broom:
            //завести экземпляр класса Broom с параметром(distance)
            std::cout << "\nМетла успешно зарегистрирован!\n";
            break;
        }
        


        quantity_vehicles += 1;
    } while (choice_vehicle != 0 || quantity_vehicles < 2);
}