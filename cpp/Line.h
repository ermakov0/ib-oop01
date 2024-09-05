#pragma once
#include <string>
#include "Point.h"

/// <summary>
/// 2D �������
/// </summary>
class Line
{
public:
    Line(const Point& begin, const Point& end);
    ~Line();
    //Line() = delete;
    Line(const Line& line) = delete;  // ������� ����������� �����������
    double getLenght() const;
    void display() const;
    std::string toString() const;
    const Point& getBegin() const;
    const Point& getEnd() const;

private:
    //void setBegin(const Point& begin);
    //void setEnd(const Point& end);

    /// <summary>
    /// ���������� ������ �������
    /// </summary>
    Point m_begin;

    /// <summary>
    /// ���������� ����� �������
    /// </summary>
    Point m_end;
};
