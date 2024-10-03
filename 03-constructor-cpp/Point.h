#pragma once
#include <iostream>

class Point
{
public:
    /// <summary>
    /// ����������� ��� ���������� (�� ���������)
    /// </summary>
    Point();

    /// <summary>
    /// ����������� � ����� ����������
    /// </summary>
    /// <param name="x"></param>
    Point(double x);

    /// <summary>
    /// ����������� �� ����� �����������
    /// </summary>
    /// <param name="x"></param>
    /// <param name="y"></param>
    Point(double x, double y);

    /// <summary>
    /// ����������
    /// </summary>
    ~Point();

    double getX() const { return m_x; }
    double getY() const { return m_y; }
    friend std::ostream& operator<<(std::ostream& os, const Point& obj);

private:
    double m_x;
    double m_y;
};
