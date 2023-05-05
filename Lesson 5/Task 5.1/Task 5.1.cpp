#include <iostream>
#include <string>

class Figure
{
protected:
    int sides_count;
    std::string name;

public:
    Figure(int count)
    {
        sides_count = count;
    }
    int get_sides_count()
    {
        return sides_count;
    }
    std::string get_name()
    {
        name = "Фигура: ";
        return name;
    }
};

class Triangle : public Figure
{
public:
    Triangle (int count):Figure(count)
    {

    }
    std::string get_name()
    {
        name = "Треугольник: ";
        return name;
    }
};

class Quadrangle :public Figure
{
public:
    Quadrangle(int count) :Figure(count)
    {

    }
    std::string get_name()
    {
        name = "Четырёхугольник: ";
        return name;
    }
};

int main()
{
    setlocale(0, "");
    std::cout << "\n\t\tЗадача 1. Фигуры. Количество сторон.\n\n";

    std::cout << "Количество сторон:\n";

    Figure Noname(0);
    std::cout << Noname.get_name() << Noname.get_sides_count() << "\n";

    Triangle Triangle(3);
    std::cout << Triangle.get_name() << Triangle.get_sides_count() << "\n";

    Quadrangle Quadrangle(4);
    std::cout << Quadrangle.get_name() << Quadrangle.get_sides_count() << "\n";

}