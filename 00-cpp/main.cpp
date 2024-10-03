/**
 * Л/р 1 Объектно-ориентированное программирование на С++ и C#
*/
#include <iostream>
#include <windows.h>
#include "Point.h"
#include "Line.h"

/// <summary>
/// Точка входа в программу
/// </summary>
/// <returns>Всегда 0</returns>
int main()
{
    system("chcp 1251 > nul");

    // первая точка вводится с клавиатуры
    Point p1;
    std::cin >> p1;
    // вторая точка использует конструктор с параметрами
    Point p2(1.5, 4.2);

    std::cout << "Точка p1:\n" << p1 << std::endl;
    //p1.display();
    std::cout << "Точка p2:\n" << p2 << std::endl;
    //p2.display();

    Point p3 = p1 - p2;
    std::cout << "Разность точек:\n" << p3 << std::endl;

    Line line(p1, p2);
    std::cout << "Отрезок line:\n" << line << std::endl;
    //line.display();
    std::cout << "Длина отрезка line: " << line.getLenght() << std::endl;

    Line line2;
    std::cin >> line2;
    std::cout << line2 << std::endl;
    return 0;
}
