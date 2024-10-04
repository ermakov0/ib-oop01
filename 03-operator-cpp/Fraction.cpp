#include <iostream>
#include <numeric>
#include <stdexcept>

#include "Fraction.h"

Fraction::Fraction(int numenator, int denuminator)
{
    setNumenator(numenator);
    setDenuminator(denuminator);
    normalize();
}

void Fraction::setNumenator(int value)
{
    m_numenator = value;
}

void Fraction::setDenuminator(int value)
{
    if (value == 0)
    {
        throw std::invalid_argument("Знаменатель не может быть равен нулю");
    }
    m_denuminator = value;
}

void Fraction::normalize()
{
    const int n1 = getNumenator();
    const int d1 = getDenuminator();
    const int gcd = std::gcd(n1, d1);  // c++17
    setNumenator(n1 / gcd);
    setDenuminator(d1 / gcd);
}

Fraction Fraction::operator+(const Fraction& rhs) const
{
    const int n1 = getNumenator();
    const int d1 = getDenuminator();
    const int n2 = rhs.getNumenator();
    const int d2 = rhs.getDenuminator();

    const int n11 = n1 * d2;
    const int n22 = n2 * d1;
    const int d11 = d1 * d2;

    return Fraction(n11 + n22, d11);
}

Fraction& Fraction::operator++()
{
    const int n1 = getNumenator();
    const int d1 = getDenuminator();
    setNumenator(n1 + d1);  // +1
    normalize();
    return *this;
}

Fraction Fraction::operator++(int)
{
    // копируется объект
    Fraction old = *this;
    // переиспользуется перегрузка префиксного инкремента
    ++*this;
    return old;
}

std::ostream& operator<<(std::ostream& os, const Fraction& obj)
{
    os << obj.getNumenator() << '/' << obj.getDenuminator();
    return os;
}
