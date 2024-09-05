#pragma once
#include <string>

/// <summary>
/// 2D точка
/// </summary>
class Point
{
public:
    Point();
    Point(double x, double y);
    Point(const Point& point);
    ~Point();
    void setX(double x);
    void setY(double y);
    double getX() const;
    double getY() const;
    void display() const;
    std::string toString() const;

private:
    void read();
    void init(double x, double y);

    /// <summary>
    /// Координата x
    /// </summary>
    double m_x;

    /// <summary>
    /// Координата y
    /// </summary>
    double m_y;
};
