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

    /// <summary>
    /// Перегрузка оператора "+"
    /// </summary>
    /// <param name="rhs">правый операнд</param>
    /// <returns>Новый объект дроби</returns>
    Fraction operator+(const Fraction& rhs) const;

    // https://learn.microsoft.com/en-us/cpp/cpp/increment-and-decrement-operator-overloading-cpp

    /// <summary>
    /// Перегрузка оператора "префиксный ++"
    /// </summary>
    /// <returns>Ссылка на объект</returns>
    Fraction& operator++();

    /// <summary>
    /// Перегрузка оператора "постфиксный ++"
    /// </summary>
    /// <returns>Объект со старым значением</returns>
    Fraction operator++(int);

    friend std::ostream& operator<<(std::ostream& os, const Fraction& obj);

    int getNumenator() const { return m_numenator; }
    int getDenuminator() const { return m_denuminator; }
private:
    void setNumenator(int value);
    void setDenuminator(int value);

    /// <summary>
    /// Нормализовать число
    /// </summary>
    void normalize();

    /// <summary>
    /// Числитель
    /// </summary>
    int m_numenator;

    /// <summary>
    /// Знаменатель
    /// </summary>
    int m_denuminator;
};
