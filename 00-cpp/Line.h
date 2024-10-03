#pragma once
#include <iostream>
#include "Point.h"

/// <summary>
/// 2D отрезок
/// </summary>
class Line
{
public:
    Line();
    Line(const Point& begin, const Point& end);
    Line(const Line& obj) = delete;  // Удаляем конструктор копирования
    ~Line();
    double getLenght() const;
    friend std::ostream& operator<<(std::ostream& os, const Line& obj);
    friend std::istream& operator>>(std::istream& is, Line& obj);

private:
    /// <summary>
    /// Координаты начала отрезка
    /// </summary>
    Point m_begin;

    /// <summary>
    /// Координаты конца отрезка
    /// </summary>
    Point m_end;
};
