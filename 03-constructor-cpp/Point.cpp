#include <iostream>
#include "Point.h"

Point::Point()
{
    m_x = 0.0;
    m_y = 0.0;
}

Point::Point(double x)
{
    m_x = x;
    m_y = 0.0;
}

Point::Point(double x, double y)
{
    m_x = x;
    m_y = y;
}

Point::~Point()
{
}

std::ostream& operator<<(std::ostream& os, const Point& obj)
{
    os << "Point(" << obj.getX() << ',' << obj.getY() << ')';
    return os;
}
