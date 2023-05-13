#include <iostream>
#include <string>

class Figure
{
protected:
    std::string figure_name;
    int quantity_sides;

public:
    Figure()
    {

    }
    Figure(int quantity_sides)
    {
        figure_name = "Фигура:";
        this->quantity_sides= quantity_sides;
    }
    std::string get_name()
    {
        return figure_name;
    }
    virtual std::string check()
    {
        if (!quantity_sides)
        {
            return "Правильная";
        }
        else 
        {
            return "Неправильная";
        }
    }
    virtual void print_myself()
    {
        std::cout << "\n" << get_name() << "\n";
        std::cout << check() << "\n";
        std::cout << "Количество сторон: " << quantity_sides << "\n";
    };
   
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
    Triangle(int quantity_sides, int a, int b, int c, int A, int B, int C)
    {
        side_a = a;
        side_b = b;
        side_c = c;

        angle_A = A;
        angle_B = B;
        angle_C = C;

        figure_name = "Треугольник:";
        this->quantity_sides = quantity_sides;

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
    std::string check() override
    {
        if (quantity_sides==3 && (angle_A + angle_B + angle_C)==180)
        {
            return "Правильная";
        }
        else
        {
            return "Неправильная";
        }
    }
    void print_myself() override
    {
        std::cout << "\n" << get_name() << "\n";
        std::cout << check() << "\n";
        std::cout << "Количество сторон: " << quantity_sides << "\n";
        std::cout << "Стороны:" << " a=" << get_side_a() << " b=" << get_side_b() << " c=" << get_side_c() << "\n";
        std::cout << "Углы:" << " A=" << get_angle_A() << " B=" << get_angle_B() << " C=" << get_angle_C() << "\n";
    }
};

class RectTriangle : public Triangle
{
public:
    RectTriangle(int quantity_sides, int a, int b, int c, int A, int B)
    {
        side_a = a;
        side_b = b;
        side_c = c;

        angle_A = A;
        angle_B = B;
        angle_C = 90;

        figure_name = "Прямоугольный треугольник:";
        this->quantity_sides = quantity_sides;
    }
    std::string get_name()
    {
        return figure_name;
    }
    std::string check() override
    {
        if (angle_C == 90)
        {
            return "Правильная";
        }
        else
        {
            return "Неправильная";
        }
    }
};

class IsosTriangle :public Triangle
{
public:
    IsosTriangle(int quantity_sides, int a, int b, int A, int B)
    {
        side_a = side_c = a;
        side_b = b;

        angle_A = angle_C = A;
        angle_B = B;

        figure_name = "Равнобедренный треугольник:";
        this->quantity_sides = quantity_sides;
    }
    std::string get_name()
    {
        return figure_name;
    }
    std::string check() override
    {
        if (side_a == side_c && angle_A == angle_C)
        {
            return "Правильная";
        }
        else
        {
            return "Неправильная";
        }
    }
};

class EquilTriangle :public Triangle
{
public:
    EquilTriangle(int quantity_sides, int a)
    {
        side_a = side_b = side_c = a;

        angle_A = angle_B = angle_C = 60;

        figure_name = "Равносторонний треугольник:";
        this->quantity_sides = quantity_sides;
    }
    std::string get_name()
    {
        return figure_name;
    }
    std::string check() override
    {
        if (side_a == side_b && side_b == side_c && side_a == side_c && angle_A == 60 && angle_B == 60 && angle_C == 60)
        {
            return "Правильная";
        }
        else
        {
            return "Неправильная";
        }
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
    Quadrilateral(int quantity_sides, int a, int b, int c, int d, int A, int B, int C, int D)
    {
        side_a = a;
        side_b = b;
        side_c = c;
        side_d = d;

        angle_A = A;
        angle_B = B;
        angle_C = C;
        angle_D = D;

        figure_name = "Четырёхугольник:";
        this->quantity_sides = quantity_sides;
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
    std::string check() override
    {
        if (quantity_sides == 4 && (angle_A + angle_B + angle_C + angle_D) == 360)
        {
            return "Правильная";
        }
        else
        {
            return "Неправильная";
        }
    }
    void print_myself() override
    {
        std::cout << "\n" << get_name() << "\n";
        std::cout << check() << "\n";
        std::cout << "Количество сторон: " << quantity_sides << "\n";
        std::cout << "Стороны:" << " a=" << get_side_a() << " b=" << get_side_b() << " c=" << get_side_c() << " d=" << get_side_d() << "\n";
        std::cout << "Углы:" << " A=" << get_angle_A() << " B=" << get_angle_B() << " C=" << get_angle_C() << " D=" << get_angle_D() << "\n";
    }
};

class Parallelogram : public Quadrilateral
{
public:
    Parallelogram()
    {

    }
    Parallelogram(int quantity_sides,int a, int b, int A, int B)
    {
        side_a = side_c = a;
        side_b = side_d = b;

        angle_A = angle_C = A;
        angle_B = angle_D = B;

        figure_name = "Параллелограмм:";
        this->quantity_sides = quantity_sides;
    }
    std::string get_name()
    {
        return figure_name;
    }
    std::string check() override
    {
        if (side_a == side_c && side_b == side_d && angle_A == angle_C && angle_B == angle_D)
        {
            return "Правильная";
        }
        else
        {
            return "Неправильная";
        }
    }
};

class Rectangle : public Parallelogram
{
public:
    Rectangle()
    {

    }
    Rectangle(int quantity_sides, int a, int b)
    {
        side_a = side_c = a;
        side_b = side_d = b;

        angle_A = angle_B = angle_C = angle_D = 90;

        figure_name = "Прямоугольник:";
        this->quantity_sides = quantity_sides;
    }
    std::string get_name()
    {
        return figure_name;
    }
    std::string check() override
    {
        if (side_a == side_c && side_b == side_d && angle_A == 90 && angle_B == 90 && angle_C == 90 && angle_D == 90)
        {
            return "Правильная";
        }
        else
        {
            return "Неправильная";
        }
    }
};

class Rhomb : public Parallelogram
{
public:
    Rhomb(int quantity_sides, int a, int A, int B)
    {
        side_a = side_b = side_c = side_d = a;

        angle_A = angle_C = A;
        angle_B = angle_D = B;

        figure_name = "Ромб:";
        this->quantity_sides = quantity_sides;
    }
    std::string get_name()
    {
        return figure_name;
    }
    std::string check() override
    {
        if (side_a == side_b && side_b == side_c && side_c == side_d && side_a == side_d && angle_A == angle_C && angle_B == angle_D)
        {
            return "Правильная";
        }
        else
        {
            return "Неправильная";
        }
    }
};

class Square : public Rectangle
{
public:
    Square(int quantity_sides, int a)
    {
        side_a = side_b = side_c = side_d = a;

        angle_A = angle_B = angle_C = angle_D = 90;

        figure_name = "Квадрат:";
        this->quantity_sides = quantity_sides;
    }
    std::string get_name()
    {
        return figure_name;
    }
    std::string check() override
    {
        if (side_a == side_b && side_b == side_c && side_c == side_d && side_a == side_d && angle_A == 90 && angle_B == 90 && angle_C == 90 && angle_D == 90)
        {
            return "Правильная";
        }
        else
        {
            return "Неправильная";
        }
    }
};

void print_info(Figure* p)
{
    p->print_myself();
}

void check(Figure* p)
{
    p->check();
}

int main()
{
    setlocale(0, "");
    std::cout << "\n\t\tЗадача 3. Фигуры. Методы.\n";

    Figure Fig(0);
    check(&Fig);
    print_info(&Fig);

    Triangle Tr(3, 10, 20, 30, 50, 60, 70);
    check(&Tr);
    print_info(&Tr);

    RectTriangle RectTr(3, 10, 20, 30, 50, 60);
    check(&RectTr);
    print_info(&RectTr);

    IsosTriangle IsosTr(3, 10, 20, 50, 60);
    check(&IsosTr);
    print_info(&IsosTr);

    EquilTriangle EquilTr(3, 30);
    check(&EquilTr);
    print_info(&EquilTr);

    Quadrilateral Quadr(4, 10, 20, 30, 40, 50, 60, 70, 80);
    check(&Quadr);
    print_info(&Quadr);

    Rectangle Rect(4, 10, 20);
    check(&Rect);
    print_info(&Rect);

    Square Box(4, 20);
    check(&Box);
    print_info(&Box);

    Parallelogram Parall(4, 20, 30, 30, 40);
    check(&Parall);
    print_info(&Parall);
    
    Rhomb Rho(4, 30, 30, 40);
    check(&Rho);
    print_info(&Rho);
}