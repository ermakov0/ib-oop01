#include <cmath>
#include <iostream>
#include "Point.h"
#include "Line.h"

/// <summary>
/// Конструктор по умолчанию
/// </summary>
Line::Line()
{
    std::cout << ">Line::Line()" << std::endl;
    m_begin = Point();
    m_end = Point();
}

//Line::Line(const Point& begin, const Point& end)
//{
//    // если конструктор написать так, то для каждого скрытого поля
//    // сначала вызовется КОНСТРУКТОР ПО УМОЛЧАНИЮ
//    // и только затем произойдёт присваивание
//    std::cout << ">Line::Line(&" << begin.toString() << ", &" << end.toString() << ")" << std::endl;
//    setBegin(begin);
//    setEnd(end);
//}

/// <summary>
/// Конструктор с параметрами
/// </summary>
/// <param name="begin">2D точка начала отрезка</param>
/// <param name="end">2D точка конца отрезка</param>
Line::Line(const Point& begin, const Point& end) : m_begin{ begin }, m_end(end)
{   // здесь у Point вызывается конструктор копирования
    std::cout << ">Line::Line(" << begin << "&, " << end << "&)" << std::endl;
}

/// <summary>
/// Деструктор
/// </summary>
Line::~Line()
{
    std::cout << ">Line::~Line()" << std::endl;
}

/// <summary>
/// Вычислить длину отрезка
/// </summary>
/// <returns>Длина отрезка по координатам двух 2D точек</returns>
double Line::getLenght() const
{
    std::cout << ">Line::getLenght()" << std::endl;
    //const Point& begin = getBegin();
    //const Point& end = getEnd();
    double result = std::sqrt(
        std::pow(m_end.getX() - m_begin.getX(), 2) +
        std::pow(m_end.getY() - m_begin.getY(), 2)
    );
    return result;
}

/// <summary>
/// Перегрузка оператора для std::cout
/// </summary>
/// <param name="os">std::cout или другой поток вывода</param>
/// <param name="line">Объект 2D линия</param>
/// <returns>std::cout или другой поток вывода</returns>
std::ostream& operator<<(std::ostream& os, const Line& line)
{
    // как дружественная функция, она имеет доступ до приватных полей объекта
    os << "Line(" << line.m_begin << ", " << line.m_end << ")";
    return os;
}

/// <summary>
/// Перегрузка оператора для std::cin
/// </summary>
/// <param name="is">std::cin или другой поток вывода</param>
/// <param name="obj">ИЗМЕНЯЕМЫЙ объект 2D линия</param>
/// <returns>std::cin или другой поток вывода</returns>
std::istream& operator>>(std::istream& is, Line& obj)
{
    //std::cout << ">operator>>(Line&)" << std::endl;
    // делаем предположение, что метод всегда будет использоваться для std::cin
    // поэтому запрашиваем пользовательский ввод у cout
    std::cout << "Введите координаты начала отрезка:\n";
    is >> obj.m_begin;
    std::cout << "Введите координаты конца отрезка:\n";
    is >> obj.m_end;
    return is;
}
