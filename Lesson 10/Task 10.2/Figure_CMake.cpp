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
    std::cout << "\n\t\tЗадача 3. Иерархия классов.\n";

    Triangle Tr(10, 20, 30, 50, 60, 70);
    print_info(&Tr);

    RectTriangle RectTr(10, 20, 30, 50, 60);
    print_info(&RectTr);

    IsosTriangle IsosTr(10, 20, 50, 60);
    print_info(&IsosTr);

    EquilTriangle EquilTr(30);
    print_info(&EquilTr);

    Quadrilateral Quadr(10, 20, 30, 40, 50, 60, 70, 80);
    print_info(&Quadr);

    Rectangle Rect(10, 20);
    print_info(&Rect);

    Square Box(20);
    print_info(&Box);

    Parallelogram Parall(20, 30, 30, 40);
    print_info(&Parall);

    Rhomb Rho(30, 30, 40);
    print_info(&Rho);
}