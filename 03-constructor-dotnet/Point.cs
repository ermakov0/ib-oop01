namespace _03_constructor_dotnet
{
    public class Point
    {
        /// <summary>
        /// Конструктор без параметров (по умолчанию)
        /// </summary>
        public Point() { X = 0.0; Y = 0.0; }

        /// <summary>
        /// Конструктор с одним параметром
        /// </summary>
        /// <param name="x"></param>
        public Point(double x) { X = x; Y = 0.0; }

        /// <summary>
        /// Конструктор со всеми параметрами
        /// </summary>
        /// <param name="x"></param>
        /// <param name="y"></param>
        public Point(double x, double y) { X = x; Y = y; }

        public override string ToString()
        {
            return "Point(" + X + "," + Y + ")";
        }

        public double X { get; private set; }
        public double Y { get; private set; }
    }
}
