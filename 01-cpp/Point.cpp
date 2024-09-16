#include <iostream>
#include "Point.h"

//Point::Point() : m_x{ 0.0 }, m_y{ 0.0 }
//{
//    std::cout << ">Point::Point()" << std::endl;
//    // ������� ������������� ������� ������� ������
//    read();
//}

/// <summary>
/// ����������� �� ���������
/// </summary>
Point::Point()
{
    // ���� ����������� �������� ���, �� ��� ������� �������� ����
    // ������� ��������� ����������� �� ��������� (��� double = 0.0)
    // � ������ ����� ��������� ������������
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
/// ����������� � �����������
/// </summary>
/// <param name="x">���������� x</param>
/// <param name="y">���������� y</param>
Point::Point(double x, double y)
{
    // ���� ����������� �������� ���, �� ��� ������� �������� ����
    // ������� ��������� ����������� �� ��������� (��� double = 0.0)
    // � ������ ����� ��������� ������������
    std::cout << ">Point::Point(" << x << ", " << y << ")" << std::endl;
    setX(x);
    setY(y);
}

/// <summary>
/// ����������� �����������
/// </summary>
/// <param name="obj">2D ����� ��� �����������</param>
Point::Point(const Point& obj)
{
    std::cout << ">Point::Point(" << obj << "&)" << std::endl;
    // �� �����, ��� ������ �������, ������ �������� ���� ��� ������ ��������/�������� 
    m_x = obj.m_x;
    m_y = obj.m_y;
}

/// <summary>
/// ����������
/// </summary>
Point::~Point()
{
    std::cout << ">Point::~Point()" << std::endl;
}

/// <summary>
/// ������ ��� ���� x
/// </summary>
/// <returns>�������� ���� x</returns>
double Point::getX() const
{
    std::cout << ">Point::getX()" << std::endl;
    return m_x;
}

/// <summary>
/// ������ ��� ���� y
/// </summary>
/// <returns>�������� ���� y</returns>
double Point::getY() const
{
    std::cout << ">Point::getY()" << std::endl;
    return m_y;
}

/// <summary>
/// ������ ��� ���� x
/// </summary>
/// <param name="x">����� �������� ���������� x</param>
void Point::setX(double x)
{
    std::cout << ">Point::setX(" << x << ")" << std::endl;
    //this->m_x = x;
    m_x = x;
}

/// <summary>
/// ������ ��� ���� y
/// </summary>
/// <param name="y">����� �������� ���������� y</param>
void Point::setY(double y)
{
    std::cout << ">Point::setY(" << y << ")" << std::endl;
    //this->m_y = y;
    m_y = y;
}

/// <summary>
/// ���������� ��������� "�����"
/// </summary>
/// <param name="rhs">2D ����� ������ �� ���������</param>
/// <returns>����� 2D �����</returns>
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
/// ���������� ��������� ��� std::cout
/// </summary>
/// <param name="os">std::cout ��� ������ ����� ������</param>
/// <param name="obj">������ 2D �����</param>
/// <returns>std::cout ��� ������ ����� ������</returns>
std::ostream& operator<<(std::ostream& os, const Point& obj)
{
    //std::cout << ">operator<<(Point&)" << std::endl;
    // ��� ������������� �������, ��� ����� ������ �� ��������� ����� �������
    os << "Point(" << obj.m_x << ", " << obj.m_y << ")";
    return os;
}

/// <summary>
/// ���������� ��������� ��� std::cin
/// </summary>
/// <param name="is">std::cin ��� ������ ����� ������</param>
/// <param name="obj">���������� ������ 2D �����</param>
/// <returns>std::cin ��� ������ ����� ������</returns>
std::istream& operator>>(std::istream& is, Point& obj)
{
    //std::cout << ">operator>>(Point&)" << std::endl;
    // ������ �������������, ��� ����� ������ ����� �������������� ��� std::cin
    // ������� ����������� ���������������� ���� � cout
    double x, y;
    std::cout << "������� x: ";
    is >> x;
    std::cout << "������� y: ";
    is >> y;
    obj.setX(x);
    obj.setY(y);
    return is;
}
