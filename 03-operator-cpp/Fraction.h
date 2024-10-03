#pragma once
#include <iostream>

/// <summary>
/// Дробь
/// </summary>
class Fraction
{
public:
    /// <summary>
    /// Конструктор дроби
    /// </summary>
    /// <param name="numenator">числитель</param>
    /// <param name="denuminator">знаменатель</param>
    Fraction(int numenator, int denuminator);

    int getNumenator() const;
    int getDenuminator() const;

    /// <summary>
    /// Перегрузка оператора "+"
    /// </summary>
    /// <param name="rhs">правый операнд</param>
    /// <returns>Новый объект дроби</returns>
    Fraction operator+(const Fraction& rhs) const;

    //todo ++a and a++

    friend std::ostream& operator<<(std::ostream& os, const Fraction& obj);

private:
    void setNumenator(int value);
    void setDenuminator(int value);

    /// <summary>
    /// Числитель
    /// </summary>
    int m_numenator;

    /// <summary>
    /// Знаменатель
    /// </summary>
    int m_denuminator;
};
