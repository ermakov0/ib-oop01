#include <iostream>
#include <windows.h>

#include "Fraction.h"

int main()
{
    system("chcp 1251 > nul");

    Fraction f1(1, 2);
    Fraction f2(1, 3);
    Fraction f3 = f1 + f2;
    std::cout << f1 << " + " << f2 << " = " << f3 << std::endl;
}
