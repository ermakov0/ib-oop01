/**
 * Л/р 1 Объектно-ориентированное программирование на С++ и C#
*/
//using System;
//using Ib.Lab1;

namespace Ib.Lab1
{
    public class Program
    {
        /// <summary>
        /// Точка входа в программу
        /// </summary>
        /// <param name="args">Аргументы командной строки</param>
        public static void Main(string[] args)
        {
            // первая точка вводится с клавиатуры
            Point p1 = new Point();
            // вторая точка использует конструктор с параметрами
            Point p2 = new Point(1.5, 4.2);

            Console.WriteLine("Точка p1:");
            p1.Display();
            Console.WriteLine("Точка p2:");
            p2.Display();

            Line line = new Line(p1, p2);
            Console.WriteLine("Отрезок line:");
            line.Display();
            Console.WriteLine("Длина отрезка line: {0}", line.GetLenght());
        }
    }
}
