/**
 * Л/р 2 Объектно-ориентированное программирование на С++ и C#
*/
//using System;
//using ib02;

namespace ib02
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
            Point p1 = Point.Read();
            // вторая точка использует конструктор с параметрами
            Point p2 = new Point(1.5, 4.2);

            Console.WriteLine("Точка p1: {0}", p1);
            //p1.Display();
            Console.WriteLine("Точка p2: {0}", p2);
            //p2.Display();

            Point p3 = p1 - p2;
            Console.WriteLine("Разность точек: {0}", p3);

            Line line = new Line(p1, p2);
            Console.WriteLine("Отрезок line: {0}", line);
            // line.Display();
            Console.WriteLine("Длина отрезка line: {0}", line.GetLenght());

            Line line2 = Line.Read();
            Console.WriteLine(line2);
        }
    }
}
