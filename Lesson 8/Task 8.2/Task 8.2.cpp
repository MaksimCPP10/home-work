#include "MyException.h"
#include "Figure.h"
#include "Triangle.h"
#include "RectTriangle.h"
#include "IsosTriangle.h"
#include "EquilTriangle.h"
#include "Quadrilateral.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Square.h"
#include "Rhomb.h"
#include <iostream>
#include <string>

void print_info(Figure* p)
{
    p->print_myself();
}

int main()
{
    setlocale(0, "");
    std::cout << "\n\t\tЗадача 2. Исключения в конструкторах.\n";

    try
    {
        Triangle Tr(3,10, 20, 30, 50, 60, 70);
        print_info(&Tr);
    }
    catch (const MyException& ex)
    {
        std::cout << "\nОшибка создания фигуры. Причина: " << ex.what() << ".\n";
    }
    
    try
    {
        RectTriangle RectTr(10, 20, 30, 50, 60, 90);
        print_info(&RectTr);
    }
    catch (const MyException& ex)
    {
        std::cout << "\nОшибка создания фигуры. Причина: " << ex.what() << ".\n";
    }
    
    try
    {
        IsosTriangle IsosTr(10, 20, 10, 50, 60, 50);
        print_info(&IsosTr);
    }
    catch (const MyException& ex)
    {
        std::cout << "\nОшибка создания фигуры. Причина: " << ex.what() << ".\n";
    }
    
    try
    {
        EquilTriangle EquilTr(30, 30, 30, 60, 60, 60);
        print_info(&EquilTr);
    }
    catch (const MyException& ex)
    {
        std::cout << "\nОшибка создания фигуры. Причина: " << ex.what() << ".\n";
    }
    
    try
    {
        Quadrilateral Quadr(4, 10, 20, 30, 40, 50, 60, 70, 80);
        print_info(&Quadr);
    }
    catch (const MyException& ex)
    {
        std::cout << "\nОшибка создания фигуры. Причина: " << ex.what() << ".\n";
    }
    
    try
    {
        Rectangle Rect(10, 20, 10, 20, 90, 90, 90, 90);
        print_info(&Rect);
    }
    catch (const MyException& ex)
    {
        std::cout << "\nОшибка создания фигуры. Причина: " << ex.what() << ".\n";
    }
    
    try
    {
        Square Box(20, 20, 20, 20, 90, 90, 90, 90);
        print_info(&Box);
    }
    catch (const MyException& ex)
    {
        std::cout << "\nОшибка создания фигуры. Причина: " << ex.what() << ".\n";
    }
    
    try
    {
        Parallelogram Parall(20, 30, 20, 30, 30, 40, 30, 40);
        print_info(&Parall);
    }
    catch (const MyException& ex)
    {
        std::cout << "\nОшибка создания фигуры. Причина: " << ex.what() << ".\n";
    }
    
    try
    {
        Rhomb Rho(30, 30, 30, 30, 30, 40, 30, 40);
        print_info(&Rho);
    }
    catch (const MyException& ex)
    {
        std::cout << "\nОшибка создания фигуры. Причина: " << ex.what() << ".\n";
    }
    
}