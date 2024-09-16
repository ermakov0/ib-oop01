#pragma once
#include <iostream>
#include "Point.h"

/// <summary>
/// 2D �������
/// </summary>
class Line
{
public:
    Line();
    Line(const Point& begin, const Point& end);
    Line(const Line& obj) = delete;  // ������� ����������� �����������
    ~Line();
    double getLenght() const;
    friend std::ostream& operator<<(std::ostream& os, const Line& obj);
    friend std::istream& operator>>(std::istream& is, Line& obj);

private:
    /// <summary>
    /// ���������� ������ �������
    /// </summary>
    Point m_begin;

    /// <summary>
    /// ���������� ����� �������
    /// </summary>
    Point m_end;
};
