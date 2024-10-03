namespace _03_dotnet_override
{
    /// <summary>
    /// Отрезок
    /// </summary>
    public class Line
    {
        /// <summary>
        /// Вместо конструктора с параметрами
        /// </summary>
        /// <param name="begin">Начало отрезка</param>
        /// <param name="end">Конец отрезка</param>
        public void Init(double begin, double end)
        {
            Begin = begin;
            End = end;
        }

        /// <summary>
        /// Вычислить длину отрезка
        /// </summary>
        /// <returns>Длина отрезка</returns>
        public double GetLenght()
        {
            return Math.Abs(End - Begin);
        }

        /*
        /// <summary>
        /// Перегруженный метод вычисления длины отрезка
        /// </summary>
        /// <param name="result">OUT-параметр, возвращает длину отрезка</param>
        public void GetLenght(ref double result)
        {
            // вызываем перегруженный метод, чтобы не дублировать код
            result = GetLenght();
        }
        */

        public void GetLenght(out double result)
        {
            // вызываем перегруженный метод, чтобы не дублировать код
            result = GetLenght();
        }

        /// <summary>
        /// Получить строковое представление объекта
        /// </summary>
        /// <returns>Строковое представление объекта</returns>
        public override string ToString()
        {
            return "Line(" + Begin + "," + End + ")";
        }

        /// <summary>
        /// Начало отрезка
        /// </summary>
        public double Begin { get; private set; }

        /// <summary>
        /// Конец отрезка
        /// </summary>
        public double End { get; private set; }
    }
}
