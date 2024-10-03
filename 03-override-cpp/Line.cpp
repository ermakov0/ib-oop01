#include "Line.h"

double Line::getLenght() const
{
    return abs(getEnd() - getBegin());
}

void Line::getLenght(double* result) const
{
    // вызываем перегруженный метод, чтобы не дублировать код
    *result = getLenght();
}

void Line::getLenght(double& result/*out*/) const
{
    // вызываем перегруженный метод, чтобы не дублировать код
    result = getLenght();
}

std::ostream& operator<<(std::ostream& os, const Line& obj)
{
    os << "Line(" << obj.getBegin() << ',' << obj.getEnd() << ")";
    return os;
}
