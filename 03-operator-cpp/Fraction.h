#pragma once
#include <iostream>

/// <summary>
/// �����
/// </summary>
class Fraction
{
public:
    /// <summary>
    /// ����������� �����
    /// </summary>
    /// <param name="numenator">���������</param>
    /// <param name="denuminator">�����������</param>
    Fraction(int numenator, int denuminator);

    /// <summary>
    /// ���������� ��������� "+"
    /// </summary>
    /// <param name="rhs">������ �������</param>
    /// <returns>����� ������ �����</returns>
    Fraction operator+(const Fraction& rhs) const;

    // https://learn.microsoft.com/en-us/cpp/cpp/increment-and-decrement-operator-overloading-cpp

    /// <summary>
    /// ���������� ��������� "���������� ++"
    /// </summary>
    /// <returns>������ �� ������</returns>
    Fraction& operator++();

    /// <summary>
    /// ���������� ��������� "����������� ++"
    /// </summary>
    /// <returns>������ �� ������ ���������</returns>
    Fraction operator++(int);

    friend std::ostream& operator<<(std::ostream& os, const Fraction& obj);

    int getNumenator() const { return m_numenator; }
    int getDenuminator() const { return m_denuminator; }
private:
    void setNumenator(int value);
    void setDenuminator(int value);

    /// <summary>
    /// ������������� �����
    /// </summary>
    void normalize();

    /// <summary>
    /// ���������
    /// </summary>
    int m_numenator;

    /// <summary>
    /// �����������
    /// </summary>
    int m_denuminator;
};
