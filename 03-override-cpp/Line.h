#pragma once
#include <iostream>

/// <summary>
/// Отрезок
/// </summary>
class Line
{
public:
    /// <summary>
    /// Вместо конструктора с параметрами (тело метода будет заинлайнено)
    /// </summary>
    /// <param name="begin">Начало отрезка</param>
    /// <param name="end">Конец отрезка</param>
    void init(double begin, double end) { m_begin = begin; m_end = end; }

    /// <summary>
    /// Геттер начала отрезка (тело метода будет заинлайнено)
    /// </summary>
    /// <returns>Начало отрезка</returns>
    double getBegin() const { return m_begin; }

    /// <summary>
    /// Геттер конца отрезка (тело метода будет заинлайнено)
    /// </summary>
    /// <returns>Конец отрезка</returns>
    double getEnd() const { return m_end; }

    /// <summary>
    /// Вычислить длину отрезка
    /// </summary>
    /// <returns>Длина отрезка</returns>
    double getLenght() const;

    /// <summary>
    /// Перегруженный метод вычисления длины отрезка
    /// </summary>
    /// <param name="result">OUT-параметр, возвращает длину отрезка</param>
    void getLenght(double* result) const;

    /// <summary>
    /// Перегруженный метод вычисления длины отрезка
    /// </summary>
    /// <param name="result">OUT-параметр, возвращает длину отрезка</param>
    void getLenght(double& result/*out*/) const;

    friend std::ostream& operator<<(std::ostream& os, const Line& obj);

private:
    /// <summary>
    /// Начало отрезка
    /// </summary>
    double m_begin;

    /// <summary>
    /// Конец отрезка
    /// </summary>
    double m_end;
};
