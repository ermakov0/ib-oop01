#include <cmath>
#include <iostream>
#include "Point.h"
#include "Line.h"

/// <summary>
/// ����������� �� ���������
/// </summary>
Line::Line()
{
    std::cout << ">Line::Line()" << std::endl;
    m_begin = Point();
    m_end = Point();
}

//Line::Line(const Point& begin, const Point& end)
//{
//    // ���� ����������� �������� ���, �� ��� ������� �������� ����
//    // ������� ��������� ����������� �� ���������
//    // � ������ ����� ��������� ������������
//    std::cout << ">Line::Line(&" << begin.toString() << ", &" << end.toString() << ")" << std::endl;
//    setBegin(begin);
//    setEnd(end);
//}

/// <summary>
/// ����������� � �����������
/// </summary>
/// <param name="begin">2D ����� ������ �������</param>
/// <param name="end">2D ����� ����� �������</param>
Line::Line(const Point& begin, const Point& end) : m_begin{ begin }, m_end(end)
{   // ����� � Point ���������� ����������� �����������
    std::cout << ">Line::Line(" << begin << "&, " << end << "&)" << std::endl;
}

/// <summary>
/// ����������
/// </summary>
Line::~Line()
{
    std::cout << ">Line::~Line()" << std::endl;
}

/// <summary>
/// ��������� ����� �������
/// </summary>
/// <returns>����� ������� �� ����������� ���� 2D �����</returns>
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
/// ���������� ��������� ��� std::cout
/// </summary>
/// <param name="os">std::cout ��� ������ ����� ������</param>
/// <param name="line">������ 2D �����</param>
/// <returns>std::cout ��� ������ ����� ������</returns>
std::ostream& operator<<(std::ostream& os, const Line& line)
{
    // ��� ������������� �������, ��� ����� ������ �� ��������� ����� �������
    os << "Line(" << line.m_begin << ", " << line.m_end << ")";
    return os;
}

/// <summary>
/// ���������� ��������� ��� std::cin
/// </summary>
/// <param name="is">std::cin ��� ������ ����� ������</param>
/// <param name="obj">���������� ������ 2D �����</param>
/// <returns>std::cin ��� ������ ����� ������</returns>
std::istream& operator>>(std::istream& is, Line& obj)
{
    //std::cout << ">operator>>(Line&)" << std::endl;
    // ������ �������������, ��� ����� ������ ����� �������������� ��� std::cin
    // ������� ����������� ���������������� ���� � cout
    std::cout << "������� ���������� ������ �������:\n";
    is >> obj.m_begin;
    std::cout << "������� ���������� ����� �������:\n";
    is >> obj.m_end;
    return is;
}
