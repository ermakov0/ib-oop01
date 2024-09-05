#pragma once
#include <string>
#include "Point.h"

// 2D отрезок
class Line
{
public:
    //// Конструктор по умолчанию
    //Line();

    // Конструктор с параметрами
    Line(const Point& begin, const Point& end);
    // Удаляем конструктор копирования
    Line(const Line& line) = delete;
    // Деструктор
    ~Line();

    //// Сеттер для поля begin
    //void setBegin(const Point& begin);
    //// Сеттер для поля end
    //void setEnd(const Point& end);
    
    // Геттер для поля begin
    const Point& getBegin() const;
    // Геттер для поля end
    const Point& getEnd() const;
    // Длина отрезка
    double getLenght() const;
    // Вывод в стандартный поток вывода
    void display() const;
    // Получить текстовое представление объекта
    std::string toString() const;
private:
    // Координаты начала отрезка
    Point m_begin;
    // Координаты конца отрезка
    Point m_end;
};
