#pragma once
#include <iostream>

/// <summary>
/// 2D точка
/// </summary>
class Point
{
public:
    Point();
    Point(double x, double y);
    Point(const Point& obj);
    ~Point();
    double getX() const;
    double getY() const;
    Point operator-(const Point& rhs) const;
    //friend Point operator-(const Point& lhs, const Point& rhs);
    friend std::ostream& operator<<(std::ostream& os, const Point& obj);
    friend std::istream& operator>>(std::istream& is, Point& obj);

private:
    void setX(double x);
    void setY(double y);
    //void read();
    //void init(double x, double y);

    /// <summary>
    /// Координата x
    /// </summary>
    double m_x;

    /// <summary>
    /// Координата y
    /// </summary>
    double m_y;
};
