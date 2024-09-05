/**
 * Л/р 1 Объектно-ориентированное программирование на С++ и C#
*/

#include <iostream>
#include <windows.h>
#include "Point.h"
#include "Line.h"

int main()
{
    system("chcp 1251 > nul");

    // первая точка вводится с клавиатуры
    Point p1{};
    // вторая точка использует конструктор с параметрами
    Point p2{ 1.5, 4.2 };

    std::cout << "Точка p1:" << std::endl;
    p1.display();
    std::cout << "Точка p2:" << std::endl;
    p2.display();

    Line line{ p1, p2 };
    std::cout << "Отрезок line:" << std::endl;
    line.display();
    std::cout << "Длина отрезка line: " << line.getLenght() << std::endl;
}
