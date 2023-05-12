#include <iostream>
#include <string>

class Figure
{
protected:
    std::string figure_name;

public:
    virtual void print_myself() = 0;
};

class Triangle :public Figure
{
protected:
    int side_a;
    int side_b;
    int side_c;

    int angle_A;
    int angle_B;
    int angle_C;

public:
    Triangle()
    {
    }
    Triangle(std::string figure_name, int a, int b, int c, int A, int B, int C)
    {
        side_a = a;
        side_b = b;
        side_c = c;
        
        angle_A = A;
        angle_B = B;
        angle_C = C;

        this->figure_name = figure_name;
        
    }
    std::string get_name()
    {
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
    void print_myself() override
    {
        std::cout << "\n" << get_name() << "\n";
        std::cout << "Стороны:" << " a=" << get_side_a() << " b=" << get_side_b() << " c=" << get_side_c() << "\n";
        std::cout << "Углы:" << " A=" << get_angle_A() << " B=" << get_angle_B() << " C=" << get_angle_C() << "\n";
    }
};

class RectTriangle : public Triangle
{
public:
    RectTriangle(std::string figure_name, int a, int b, int c, int A, int B)
    {
        side_a = a;
        side_b = b;
        side_c = c;

        angle_A = A;
        angle_B = B;
        angle_C = 90;

        this->figure_name = figure_name;
    }
    std::string get_name()
    {
        return figure_name;
    }
};

class IsosTriangle :public Triangle
{
public:
    IsosTriangle(std::string figure_name, int a, int b, int A, int B)
    {
        side_a = side_c = a;
        side_b = b;

        angle_A = angle_C = A;
        angle_B = B;

        this->figure_name = figure_name;
    }
    std::string get_name()
    {
        return figure_name;
    }
};

class EquilTriangle :public Triangle
{
public:
    EquilTriangle(std::string figure_name, int a)
    {
        side_a = side_b = side_c = a;

        angle_A = angle_B = angle_C = 60;

        this->figure_name = figure_name;
    }
    std::string get_name()
    {
        return figure_name;
    }
};

class Quadrilateral :public Figure
{
protected:
    int side_a;
    int side_b;
    int side_c;
    int side_d;

    int angle_A;
    int angle_B;
    int angle_C;
    int angle_D;

public:
    Quadrilateral()
    {
    }
    Quadrilateral(std::string figure_name, int a, int b, int c, int d, int A, int B, int C, int D)
    {
        side_a = a;
        side_b = b;
        side_c = c;
        side_d = d;

        angle_A = A;
        angle_B = B;
        angle_C = C;
        angle_D = D;

        this->figure_name = figure_name;
    }
    std::string get_name()
    {
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
    int get_side_d()
    {
        return side_d;
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
    int get_angle_D()
    {
        return angle_D;
    }
    void print_myself() override
    {
        std::cout << "\n" << get_name() << "\n";
        std::cout << "Стороны:" << " a=" << get_side_a() << " b=" << get_side_b() << " c=" << get_side_c() << " d="<< get_side_d()<< "\n";
        std::cout << "Углы:" << " A=" << get_angle_A() << " B=" << get_angle_B() << " C=" << get_angle_C() << " D="<< get_angle_D()<< "\n";
    }
};

class Parallelogram : public Quadrilateral
{
public:
    Parallelogram()
    {
    }
    Parallelogram(std::string figure_name, int a, int b, int A, int B)
    {
        side_a = side_c = a;
        side_b = side_d = b;

        angle_A = angle_C = A;
        angle_B = angle_D = B;

        this->figure_name = figure_name;
    }
    std::string get_name()
    {
        return figure_name;
    }
};

class Rectangle : public Parallelogram
{
public:
    Rectangle()
    {
    }
    Rectangle(std::string figure_name, int a, int b)
    {
        side_a = side_c = a;
        side_b = side_d = b;

        angle_A = angle_B = angle_C = angle_D = 90;

        this->figure_name = figure_name;
    }
    std::string get_name()
    {
        return figure_name;
    }
};

class Rhomb : public Parallelogram
{
public:
    Rhomb(std::string figure_name, int a, int A, int B)
    {
        side_a = side_b = side_c = side_d = a;

        angle_A = angle_C = A;
        angle_B = angle_D = B;

        this->figure_name = figure_name;
    }
    std::string get_name()
    {
        return figure_name;
    }
};

class Square : public Rectangle
{
public:
    Square(std::string figure_name, int a)
    {
        side_a = side_b = side_c = side_d = a;

        angle_A = angle_B = angle_C = angle_D = 90;

        this->figure_name = figure_name;
    }
    std::string get_name()
    {
        return figure_name;
    }
};

void print_info(Figure* p)
{
    p->print_myself();
}

int main()
{
    setlocale(0, "");
    std::cout << "\n\t\tЗадача 2. Фигуры. Стороны и углы.\n";
      
    Triangle Tr("Треугольник:", 10, 20, 30, 50, 60, 70);
    print_info(&Tr);

    RectTriangle RectTr("Прямоугольный треугольник:", 10, 20, 30, 50, 60);
    print_info(&RectTr);

    IsosTriangle IsosTr("Равнобедренный треугольник:", 10, 20, 50, 60);
    print_info(&IsosTr);

    EquilTriangle EquilTr("Равносторонний треугольник:", 30);
    print_info(&EquilTr);

    Quadrilateral Quadr("Четырёхугольник:", 10, 20, 30, 40, 50, 60, 70, 80);
    print_info(&Quadr);

    Rectangle Rect("Прямоугольник:", 10, 20);
    print_info(&Rect);

    Square Box("Квадрат: ", 20);
    print_info(&Box);

    Parallelogram Parall("Параллелограмм:", 20, 30, 30, 40);
    print_info(&Parall);

    Rhomb Rho("Ромб:", 30, 30, 40);
    print_info(&Rho);
}