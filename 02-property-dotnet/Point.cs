namespace _02_dotnet_property
{
    /// <summary>
    /// 3D точка
    /// </summary>
    public class Point
    {

        /// <summary>
        /// Вместо конструктора с параметрами
        /// </summary>
        /// <param name="x">Координата X</param>
        /// <param name="y">Координата Y</param>
        /// <param name="z">Координата Z</param>
        public void Init(double x, double y, double z)
        {
            // вызываются разные сеттеры
            SetX(x);
            Y = y;
            Z = z;
        }

        /// <summary>
        /// Получить строковое представление объекта
        /// </summary>
        /// <returns>Строковое представление объекта</returns>
        public override string ToString()
        {
            // вызываются разные геттеры
            return "Point(" + GetX() + "," + Y + "," + Z + ")";
        }

        /// <summary>
        /// Олдскульный геттер (как в С++)
        /// </summary>
        /// <returns>Координата X</returns>
        public double GetX() { return m_x; }

        /// <summary>
        /// Олдскульный сеттер (как в С++)
        /// </summary>
        /// <param name="x">Новое значение координаты X</param>
        private void SetX(double x) { m_x = x; }

        /// <summary>
        /// Свойство с кастомным геттером и закрытым сеттером координаты Y
        /// </summary>
        public double Y
        {
            get { return m_y; }
            private set { m_y = value; }
        }

        /// <summary>
        /// Свойство с публичным геттером и приватным сеттером координаты X
        /// </summary>
        public double Z { get; private set; }

        /// <summary>
        /// Закрытое поле координаты X
        /// </summary>
        private double m_x;

        /// <summary>
        /// Закрытое поле координаты Y
        /// </summary>
        private double m_y;
    }
}
