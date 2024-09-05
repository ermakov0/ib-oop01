#pragma once
#include <string>

// 2D �����
class Point
{
public:
    // ����������� �� ���������
    Point();
    // ����������� � �����������
    Point(double x, double y);
    // ����������� �����������
    Point(const Point& point);
    // ����������
    ~Point();
    // ������������� �������
    void init(double x, double y);
    // ������ ��� ���� x
    void setX(double x);
    // ������ ��� ���� y
    void setY(double y);
    // ������ ��� ���� x
    double getX() const;
    // ������ ��� ���� y
    double getY() const;
    // ����� � ����������� ����� ������
    void display() const;
    // �������� ��������� ������������� �������
    std::string toString() const;
private:
    // ������������� ������� �� ������������ ������ �����
    void read();
    // ���������� x
    double m_x;
    // ���������� y
    double m_y;
};
