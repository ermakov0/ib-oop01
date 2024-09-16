#include <iostream>
#include "Point.h"

//Point::Point() : m_x{ 0.0 }, m_y{ 0.0 }
//{
//    std::cout << ">Point::Point()" << std::endl;
//    // передаём инициализацию объекта другому методу
//    read();
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
    //m_x = 0.0;
    //m_y = 0.0;
    setX(0.0);
    setY(0.0);
}

//Point::Point(double x, double y) : m_x{ x }, m_y{ y }
//{
//    std::cout << ">Point::Point(" << x << ", " << y << ")" << std::endl;
//}

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
    setX(x);
    setY(y);
}

/// <summary>
/// Конструктор копирования
/// </summary>
/// <param name="obj">2D точка для копирования</param>
Point::Point(const Point& obj)
{
    std::cout << ">Point::Point(" << obj << "&)" << std::endl;
    // мы знаем, что объект валиден, просто копируем поля без вызова сеттеров/геттеров 
    m_x = obj.m_x;
    m_y = obj.m_y;
}

/// <summary>
/// Деструктор
/// </summary>
Point::~Point()
{
    std::cout << ">Point::~Point()" << std::endl;
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
/// Сеттер для поля x
/// </summary>
/// <param name="x">Новое значение координаты x</param>
void Point::setX(double x)
{
    std::cout << ">Point::setX(" << x << ")" << std::endl;
    //this->m_x = x;
    m_x = x;
}

/// <summary>
/// Сеттер для поля y
/// </summary>
/// <param name="y">Новое значение координаты y</param>
void Point::setY(double y)
{
    std::cout << ">Point::setY(" << y << ")" << std::endl;
    //this->m_y = y;
    m_y = y;
}

/// <summary>
/// Перегрузка оператора "минус"
/// </summary>
/// <param name="rhs">2D точка справа от оператора</param>
/// <returns>Новая 2D точка</returns>
Point Point::operator-(const Point& rhs) const
{
    std::cout << ">operator-(Point&)" << std::endl;
    double x, y;
    //x = this->m_x - rhs.m_x;
    //y = this->m_y - rhs.m_y;
    x = m_x - rhs.m_x;
    y = m_y - rhs.m_y;
    return Point(x, y);
}

/// <summary>
/// Перегрузка оператора для std::cout
/// </summary>
/// <param name="os">std::cout или другой поток вывода</param>
/// <param name="obj">Объект 2D точка</param>
/// <returns>std::cout или другой поток вывода</returns>
std::ostream& operator<<(std::ostream& os, const Point& obj)
{
    //std::cout << ">operator<<(Point&)" << std::endl;
    // как дружественная функция, она имеет доступ до приватных полей объекта
    os << "Point(" << obj.m_x << ", " << obj.m_y << ")";
    return os;
}

/// <summary>
/// Перегрузка оператора для std::cin
/// </summary>
/// <param name="is">std::cin или другой поток вывода</param>
/// <param name="obj">ИЗМЕНЯЕМЫЙ объект 2D точка</param>
/// <returns>std::cin или другой поток вывода</returns>
std::istream& operator>>(std::istream& is, Point& obj)
{
    //std::cout << ">operator>>(Point&)" << std::endl;
    // делаем предположение, что метод всегда будет использоваться для std::cin
    // поэтому запрашиваем пользовательский ввод у cout
    double x, y;
    std::cout << "Введите x: ";
    is >> x;
    std::cout << "Введите y: ";
    is >> y;
    obj.setX(x);
    obj.setY(y);
    return is;
}
