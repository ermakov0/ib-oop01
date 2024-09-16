//using System;

using static System.Runtime.InteropServices.JavaScript.JSType;

namespace Ib.Lab1
{
    /// <summary>
    /// 2D отрезок
    /// </summary>
    public class Line
    {
        /// <summary>
        /// Конструктор с параметрами
        /// </summary>
        /// <param name="begin">2D точка начала отрезка</param>
        /// <param name="end">2D точка конца отрезка</param>
        public Line(Point begin, Point end)
        {
            Console.WriteLine(">Line::Line({0}, {1})", begin, end);
            Begin = begin;
            End = end;
        }

        /// <summary>
        /// Вычислить длину отрезка
        /// </summary>
        /// <returns>Длина отрезка по координатам двух 2D точек</returns>
        public double GetLenght()
        {
            Console.WriteLine(">Line::GetLenght()");
            double result = Math.Sqrt(
                Math.Pow(End.X - Begin.X, 2) +
                Math.Pow(End.Y - Begin.Y, 2)
            );
            return result;
        }

        /// <summary>
        /// Вывод в стандартный поток вывода
        /// </summary>
        public void Display()
        {
            Console.WriteLine(">Line::Display()");
            Console.WriteLine(ToString());
        }

        /// <summary>
        /// Получить текстовое представление объекта
        /// </summary>
        /// <returns>Текстовое представление объекта</returns>
        override public string ToString()
        {
            Console.WriteLine(">Line::ToString()");
            return "Line(" + Begin + ", " + End + ")";
        }

        /// <summary>
        /// Координаты начала отрезка
        /// </summary>
        public Point Begin { get; private set; }

        /// <summary>
        /// Координаты конца отрезка
        /// </summary>
        public Point End { get; private set; }
    }
}
