//using System;

namespace Ib.Lab1
{
    /// <summary>
    /// 2D точка
    /// </summary>
    public class Point
    {
        /// <summary>
        /// Конструктор по умолчанию
        /// </summary>
        public Point()
        {
            Console.WriteLine(">Point::Point()");
            // передаём инициализацию объекта другому методу
            Read();
        }

        /// <summary>
        /// Конструктор с параметрами
        /// </summary>
        /// <param name="x">Координата x</param>
        /// <param name="y">Координата y</param>
        public Point(double x, double y)
        {
            Console.WriteLine(">Point::Point({0}, {1})", x, y);
            Init(x, y);
        }

        /*
        /// <summary>
        /// Конструктор копирования
        /// </summary>
        /// <param name="point">2D точка для копирования</param>
        public Point(Point point)
        {
            Console.WriteLine(">Point::Point({0})", point);
            Init(point.X, point.Y);
        }
        */

        /// <summary>
        /// Вывод в стандартный поток вывода
        /// </summary>
        public void Display()
        {
            Console.WriteLine(">Point::Display()");
            Console.WriteLine(ToString());
        }

        /// <summary>
        /// Получить текстовое представление объекта
        /// </summary>
        /// <returns>Текстовое представление объекта</returns>
        override public string ToString()
        {
            Console.WriteLine(">Point::ToString()");
            return "Point(" + X + ", " + Y + ")";
        }

        /// <summary>
        /// Инициализатор объекта из стандартного потока ввода
        /// </summary>
        private void Read()
        {
            Console.WriteLine(">Point::Read()");
            Console.Write("Введите x: ");
            double x = Convert.ToDouble(Console.ReadLine());
            Console.Write("Введите y: ");
            double y = Convert.ToDouble(Console.ReadLine());
            Init(x, y);
        }

        /// <summary>
        /// Инициализатор объекта
        /// </summary>
        /// <param name="x">Координата x</param>
        /// <param name="y">Координата y</param>
        private void Init(double x, double y)
        {
            Console.WriteLine(">Point::Init({0}, {1})", x, y);
            X = x;
            Y = y;
        }

        /// <summary>
        /// Координата x
        /// </summary>
        public double X
        {
            get
            {
                Console.WriteLine(">Point::X.get");
                return m_x;
            }
            private set
            {
                Console.WriteLine(">Point::X.set({0})", value);
                m_x = value;
            }
        }

        /// <summary>
        /// Координата y
        /// </summary>
        public double Y
        {
            get
            {
                Console.WriteLine(">Point::Y.get");
                return m_y;
            }
            private set
            {
                Console.WriteLine(">Point::Y.set({0})", value);
                m_y = value;
            }
        }

        /// <summary>
        /// Координата x
        /// </summary>
        private double m_x;

        /// <summary>
        /// Координата y
        /// </summary>
        private double m_y;
    };
}
