#pragma once
#include <string>
#include "Point.h"

// 2D �������
class Line
{
public:
    //// ����������� �� ���������
    //Line();

    // ����������� � �����������
    Line(const Point& begin, const Point& end);
    // ������� ����������� �����������
    Line(const Line& line) = delete;
    // ����������
    ~Line();

    //// ������ ��� ���� begin
    //void setBegin(const Point& begin);
    //// ������ ��� ���� end
    //void setEnd(const Point& end);
    
    // ������ ��� ���� begin
    const Point& getBegin() const;
    // ������ ��� ���� end
    const Point& getEnd() const;
    // ����� �������
    double getLenght() const;
    // ����� � ����������� ����� ������
    void display() const;
    // �������� ��������� ������������� �������
    std::string toString() const;
private:
    // ���������� ������ �������
    Point m_begin;
    // ���������� ����� �������
    Point m_end;
};
