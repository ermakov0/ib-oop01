//using System;

namespace ib02
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
            X = 0.0;
            Y = 0.0;
        }

        /// <summary>
        /// Конструктор с параметрами
        /// </summary>
        /// <param name="x">Координата x</param>
        /// <param name="y">Координата y</param>
        public Point(double x, double y)
        {
            Console.WriteLine(">Point::Point({0}, {1})", x, y);
            X = x;
            Y = y;
        }

        /// <summary>
        /// Получить текстовое представление объекта
        /// </summary>
        /// <returns>Текстовое представление объекта</returns>
        override public string ToString()
        {
            //Console.WriteLine(">Point::ToString()");
            return "Point(" + X + ", " + Y + ")";
        }

        /// <summary>
        /// Инициализатор объекта из стандартного потока ввода
        /// </summary>
        public static Point Read()
        {
            Console.WriteLine(">Point::Read()");
            Console.Write("Введите x: ");
            double x = Convert.ToDouble(Console.ReadLine());
            Console.Write("Введите y: ");
            double y = Convert.ToDouble(Console.ReadLine());
            return new Point(x, y);
        }

        /// <summary>
        /// Перегрузка оператора "-"
        /// </summary>
        /// <param name="lhs">Левый операнд</param>
        /// <param name="rhs">Правый операнд</param>
        /// <returns>Новая точка</returns>
        public static Point operator -(Point lhs, Point rhs)
        {
            double x = lhs.X - rhs.X;
            double y = lhs.Y - rhs.Y;
            return new Point(x, y);
        }

        /// <summary>
        /// Координата X
        /// </summary>
        public double X { get; private set; }

        /// <summary>
        /// Координата Y
        /// </summary>
        public double Y { get; private set; }

        /*
        /// <summary>
        /// Координата X
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
        /// Координата Y
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
        /// Координата X
        /// </summary>
        private double m_x;

        /// <summary>
        /// Координата Y
        /// </summary>
        private double m_y;
        */
    };
}
