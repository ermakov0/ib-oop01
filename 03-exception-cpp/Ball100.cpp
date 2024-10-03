#include <stdexcept>
#include "Ball100.h"

Ball100::Ball100(int val)
{
    set(val);
}

int Ball100::get()
{
    return m_val;
}

void Ball100::set(int val)
{
    if (val < 0 || val > 100)
    {
        throw std::invalid_argument("Число не находится в диапазоне [0; 100]");
    }
    m_val = val;
}
