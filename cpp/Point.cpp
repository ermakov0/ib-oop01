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

/// <summary>
/// Конструктор по умолчанию
/// </summary>
Point::Point()
{
    // если конструктор написать так, то для каждого скрытого поля
    // сначала вызовется КОНСТРУКТОР ПО УМОЛЧАНИЮ (для double = 0.0)
    // и только затем произойдёт присваивание
    std::cout << ">Point::Point()" << std::endl;
    // передаём инициализацию объекта другому методу
    read();
}

/// <summary>
/// Конструктор с параметрами
/// </summary>
/// <param name="x">Координата x</param>
/// <param name="y">Координата y</param>
Point::Point(double x, double y)
{
    // если конструктор написать так, то для каждого скрытого поля
    // сначала вызовется КОНСТРУКТОР ПО УМОЛЧАНИЮ (для double = 0.0)
    // и только затем произойдёт присваивание
    std::cout << ">Point::Point(" << x << ", " << y << ")" << std::endl;
    init(x, y);
}

/// <summary>
/// Конструктор копирования
/// </summary>
/// <param name="point">2D точка для копирования</param>
Point::Point(const Point& point)
{
    std::cout << ">Point::Point(&" << point.toString() << ")" << std::endl;
    init(point.getX(), point.getY());
}

/// <summary>
/// Деструктор
/// </summary>
Point::~Point()
{
    std::cout << ">Point::~Point()" << std::endl;
}

/// <summary>
/// Вывод в стандартный поток вывода
/// </summary>
void Point::display() const
{
    std::cout << ">Point::display()" << std::endl;
    std::cout << toString() << std::endl;
}

/// <summary>
/// Получить текстовое представление объекта
/// </summary>
/// <returns>Текстовое представление объекта</returns>
std::string Point::toString() const
{
    std::cout << ">Point::toString()" << std::endl;
    std::ostringstream os;
    os << "Point(" << getX() << ", " << getY() << ")";
    return os.str();
}

/// <summary>
/// Геттер для поля x
/// </summary>
/// <returns>Значение поля x</returns>
double Point::getX() const
{
    std::cout << ">Point::getX()" << std::endl;
    return m_x;
}

/// <summary>
/// Геттер для поля y
/// </summary>
/// <returns>Значение поля y</returns>
double Point::getY() const
{
    std::cout << ">Point::getY()" << std::endl;
    return m_y;
}

/// <summary>
/// Инициализатор объекта из стандартного потока ввода
/// </summary>
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

/// <summary>
/// Инициализатор объекта
/// </summary>
/// <param name="x">Координата x</param>
/// <param name="y">Координата y</param>
void Point::init(double x, double y)
{
    std::cout << ">Point::init(" << x << ", " << y << ")" << std::endl;
    // код ниже ДОЛЖЕН инициализировать все закрытые поля объекта
    setX(x);
    setY(y);
}

/// <summary>
/// Сеттер для поля x
/// </summary>
/// <param name="x">Новое значение координаты x</param>
void Point::setX(double x)
{
    std::cout << ">Point::setX(" << x << ")" << std::endl;
    m_x = x;
}

/// <summary>
/// Сеттер для поля y
/// </summary>
/// <param name="y">Новое значение координаты y</param>
void Point::setY(double y)
{
    std::cout << ">Point::setY(" << y << ")" << std::endl;
    m_y = y;
}
