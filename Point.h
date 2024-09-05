#pragma once
#include <string>

// 2D точка
class Point
{
public:
    // Конструктор по умолчанию
    Point();
    // Конструктор с параметрами
    Point(double x, double y);
    // Конструктор копирования
    Point(const Point& point);
    // Деструктор
    ~Point();
    // Инициализатор объекта
    void init(double x, double y);
    // Сеттер для поля x
    void setX(double x);
    // Сеттер для поля y
    void setY(double y);
    // Геттер для поля x
    double getX() const;
    // Геттер для поля y
    double getY() const;
    // Вывод в стандартный поток вывода
    void display() const;
    // Получить текстовое представление объекта
    std::string toString() const;
private:
    // Инициализатор объекта из стандартного потока ввода
    void read();
    // Координата x
    double m_x;
    // Координата y
    double m_y;
};
