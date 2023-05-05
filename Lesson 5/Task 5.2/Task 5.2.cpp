#include <iostream>
#include <string>

class Triangle
{
protected:
    int side_a;
    int side_b;
    int side_c;

    int angle_A;
    int angle_B;
    int angle_C;

    std::string figure_name;

public:
    Triangle(int a, int b, int c, int A, int B, int C)
    {
        side_a = a;
        side_b = b;
        side_c = c;
        angle_A = A;
        angle_B = B;
        angle_C = C;
    }
    std::string get_name()
    {
        figure_name = "Треугольник: ";
        return figure_name;
    }
    int get_side_a()
    {
        return side_a;
    }
    int get_side_b()
    {
        return side_b;
    }
    int get_side_c()
    {
        return side_c;
    }
    int get_angle_A()
    {
        return angle_A;
    }
    int get_angle_B()
    {
        return angle_B;
    }
    int get_angle_C()
    {
        return angle_C;
    }
};

void print_info(Triangle* p)
{
    std::cout << "\n" << p.get_name << "\n";
    std::cout << "Стороны:" << " a=" << p.get_side_a << " b=" << p.get_side_b << " c=" << p.get_side_c << "\n";
    std::cout << "Углы:" << " A=" << p.get_angle_A << " B=" << p.get_angle_B << " C=" << p.get_angle_C << "\n";
}

int main()
{
    setlocale(0, "");
    std::cout << "\n\t\tЗадача 2. Фигуры. Стороны и углы.\n";
      
    Triangle Triangle(10, 20, 30, 50, 60, 70);
    print_info(&Triangle);
}

