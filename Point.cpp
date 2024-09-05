#include <sstream>
#include <string>
#include <iostream>
#include "Point.h"

//Point::Point() : m_x{ 0.0 }, m_y{ 0.0 }
//{
//    std::cout << ">Point::Point()" << std::endl;
//    // передаём инициализацию объекта другому методу
//    read();
//}
//
//Point::Point(double x, double y) : m_x{ x }, m_y{ y }
//{
//    std::cout << ">Point::Point(" << x << ", " << y << ")" << std::endl;
//}

Point::Point()
{
    // если конструктор написать так, то для каждого скрытого поля
    // сначала вызовется КОНСТРУКТОР ПО УМОЛЧАНИЮ (для double = 0.0)
    // и только затем произойдёт присваивание
    std::cout << ">Point::Point()" << std::endl;
    // передаём инициализацию объекта другому методу
    read();
}

Point::Point(double x, double y)
{
    // если конструктор написать так, то для каждого скрытого поля
    // сначала вызовется КОНСТРУКТОР ПО УМОЛЧАНИЮ (для double = 0.0)
    // и только затем произойдёт присваивание
    std::cout << ">Point::Point(" << x << ", " << y << ")" << std::endl;
    init(x, y);
}

Point::Point(const Point& point)
{
    std::cout << ">Point::Point(&" << point.toString() << ")" << std::endl;
    init(point.getX(), point.getY());
}

Point::~Point()
{
    std::cout << ">Point::~Point()" << std::endl;
}

void Point::init(double x, double y)
{
    std::cout << ">Point::init(" << x << ", " << y << ")" << std::endl;
    // код ниже ДОЛЖЕН инициализировать все закрытые поля объекта
    setX(x);
    setY(y);
}

void Point::setX(double x)
{
    std::cout << ">Point::setX(" << x << ")" << std::endl;
    m_x = x;
}

void Point::setY(double y)
{
    std::cout << ">Point::setY(" << y << ")" << std::endl;
    m_y = y;
}

double Point::getX() const
{
    std::cout << ">Point::getX()" << std::endl;
    return m_x;
}

double Point::getY() const
{
    std::cout << ">Point::getY()" << std::endl;
    return m_y;
}

void Point::display() const
{
    std::cout << ">Point::display()" << std::endl;
    std::cout << toString() << std::endl;
}

std::string Point::toString() const
{
    std::cout << ">Point::toString()" << std::endl;
    std::ostringstream os;
    os << "Point(" << getX() << ", " << getY() << ")";
    return os.str();
}

void Point::read()
{
    std::cout << ">Point::read()" << std::endl;
    double x, y;
    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите y: ";
    std::cin >> y;
    init(x, y);
}
