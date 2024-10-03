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

    int getNumenator() const;
    int getDenuminator() const;

    /// <summary>
    /// ���������� ��������� "+"
    /// </summary>
    /// <param name="rhs">������ �������</param>
    /// <returns>����� ������ �����</returns>
    Fraction operator+(const Fraction& rhs) const;

    //todo ++a and a++

    friend std::ostream& operator<<(std::ostream& os, const Fraction& obj);

private:
    void setNumenator(int value);
    void setDenuminator(int value);

    /// <summary>
    /// ���������
    /// </summary>
    int m_numenator;

    /// <summary>
    /// �����������
    /// </summary>
    int m_denuminator;
};
