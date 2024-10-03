#include <iostream>
#include <stdexcept>
#include <windows.h>

#include "Ball100.h"

int main()
{
    system("chcp 1251 > nul");
    // конструктора по умолчанию не существует
    //Ball100 ball;

    Ball100 ball(42);
    std::cout << ball.get() << std::endl;

    try
    {
        Ball100 ball(-42);
        std::cout << ball.get() << std::endl;
    }
    catch (std::invalid_argument const& ex)
    {
        std::cerr << "Ошибка: " << ex.what() << std::endl;
        return 1;
    }
}
