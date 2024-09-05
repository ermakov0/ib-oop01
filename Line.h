#pragma once
#include <string>
#include "Point.h"

/// <summary>
/// 2D отрезок
/// </summary>
class Line
{
public:
    Line(const Point& begin, const Point& end);
    ~Line();
    //Line() = delete;
    Line(const Line& line) = delete;  // Удаляем конструктор копирования
    //void setBegin(const Point& begin);
    //void setEnd(const Point& end);
    const Point& getBegin() const;
    const Point& getEnd() const;
    double getLenght() const;
    void display() const;
    std::string toString() const;

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
