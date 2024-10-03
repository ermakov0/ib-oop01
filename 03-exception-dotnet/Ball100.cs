namespace _03_exception_dotnet
{
    /// <summary>
    /// Целое число с диапазоном [0; 100]
    /// </summary>
    public class Ball100
    {
        /// <summary>
        /// Конструирует объект
        /// 
        /// Если значение числа не находится в диапазоне [0; 100],
        /// то бросается исключение 
        /// </summary>
        /// <param name="val">Значение числа</param>
        public Ball100(int val) { Val = val; }

        public int Val
        {
            get { return m_val; }
            set { ValidateValue(value); m_val = value; }
        }

        /// <summary>
        /// Валидатор для хранимого значения
        /// </summary>
        /// <param name="val"></param>
        /// <exception cref="ArgumentOutOfRangeException"></exception>
        private static void ValidateValue(int val)
        {
            if (val < 0 || val > 100)
            {
                throw new ArgumentOutOfRangeException("val");
            }
        }

        private int m_val;
    }
}
