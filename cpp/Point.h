#pragma once
#include <string>

/// <summary>
/// 2D �����
/// </summary>
class Point
{
public:
    Point();
    Point(double x, double y);
    Point(const Point& point);
    ~Point();
    void display() const;
    std::string toString() const;
    double getX() const;
    double getY() const;

private:
    void read();
    void init(double x, double y);
    void setX(double x);
    void setY(double y);

    /// <summary>
    /// ���������� x
    /// </summary>
    double m_x;

    /// <summary>
    /// ���������� y
    /// </summary>
    double m_y;
};
