#pragma once
#include <iostream>

/// <summary>
/// �������
/// </summary>
class Line
{
public:
    /// <summary>
    /// ������ ������������ � ����������� (���� ������ ����� �����������)
    /// </summary>
    /// <param name="begin">������ �������</param>
    /// <param name="end">����� �������</param>
    void init(double begin, double end) { m_begin = begin; m_end = end; }

    /// <summary>
    /// ������ ������ ������� (���� ������ ����� �����������)
    /// </summary>
    /// <returns>������ �������</returns>
    double getBegin() const { return m_begin; }

    /// <summary>
    /// ������ ����� ������� (���� ������ ����� �����������)
    /// </summary>
    /// <returns>����� �������</returns>
    double getEnd() const { return m_end; }

    /// <summary>
    /// ��������� ����� �������
    /// </summary>
    /// <returns>����� �������</returns>
    double getLenght() const;

    /// <summary>
    /// ������������� ����� ���������� ����� �������
    /// </summary>
    /// <param name="result">OUT-��������, ���������� ����� �������</param>
    void getLenght(double* result) const;

    /// <summary>
    /// ������������� ����� ���������� ����� �������
    /// </summary>
    /// <param name="result">OUT-��������, ���������� ����� �������</param>
    void getLenght(double& result/*out*/) const;

    friend std::ostream& operator<<(std::ostream& os, const Line& obj);

private:
    /// <summary>
    /// ������ �������
    /// </summary>
    double m_begin;

    /// <summary>
    /// ����� �������
    /// </summary>
    double m_end;
};
