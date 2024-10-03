/*
* Конструкторы
*/
#include <iomanip>
#include <iostream>
#include "Point.h"

int main()
{
    std::cout << std::fixed << std::setprecision(3);

    Point point0;
    Point point1(1.0);
    Point point2(1.0, 2.0);

    Point* point3 = new Point();
    Point* point4 = new Point(1.0);
    Point* point5 = new Point(1.0, 2.0);

    std::cout
        << point0 << ' ' << point1 << ' ' << point2 << ' '
        << *point3 << ' ' << *point4 << ' ' << *point5 << ' ' << std::endl;

    delete point5;
    delete point4;
    delete point3;
}
