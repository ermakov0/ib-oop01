/*
 * Перегрузка методов
 */

#include <iostream>
#include "Line.h"

int main()
{
    Line line;
    line.init(2.0, 4.0);
    std::cout << line << std::endl;

    std::cout << line.getLenght() << std::endl;

    double result;
    result = 0.0;
    line.getLenght(&result);
    std::cout << result << std::endl;

    result = 0.0;
    double& ref = result;
    line.getLenght(ref/*out*/);
    std::cout << ref << std::endl;
}
