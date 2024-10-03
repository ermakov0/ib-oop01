#include <iostream>
#include <stdexcept>

#include "Fraction.h"

Fraction::Fraction(int numenator, int denuminator)
{
    setNumenator(numenator);
    setDenuminator(denuminator);
    // todo normalize
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

int Fraction::getNumenator() const
{
    return m_numenator;
}

int Fraction::getDenuminator() const
{
    return m_denuminator;
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

std::ostream& operator<<(std::ostream& os, const Fraction& obj)
{
    os << obj.getNumenator() << '/' << obj.getDenuminator();
    return os;
}
