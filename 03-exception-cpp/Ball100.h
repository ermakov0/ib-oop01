#pragma once

/// <summary>
/// Целое число с диапазоном [0; 100]
/// </summary>
class Ball100
{
public:
    /// <summary>
    /// Конструирует объект
    /// 
    /// Если значение числа не находится в диапазоне [0; 100],
    /// то бросается исключение 
    /// </summary>
    /// <param name="val">Значение числа</param>
    Ball100(int val);

    /// <summary>
    /// Геттер
    /// </summary>
    /// <returns></returns>
    int get();

    /// <summary>
    /// Сеттер
    /// 
    /// Если значение числа не находится в диапазоне [0; 100],
    /// то бросается исключение 
    /// </summary>
    /// <param name="val"></param>
    void set(int val);

private:
    int m_val;
};
