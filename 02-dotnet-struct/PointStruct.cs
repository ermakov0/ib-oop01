namespace _02_dotnet_struct
{
    public struct PointStruct
    {
        /// <summary>
        /// Вместо конструктора с параметрами
        /// </summary>
        /// <param name="x">Координата X</param>
        /// <param name="y">Координата Y</param>
        /// <param name="z">Координата Z</param>
        public void Init(double x, double y, double z) { X = x; Y = y; Z = z; }

        /// <summary>
        /// Получить строковое представление объекта
        /// </summary>
        /// <returns>Строковое представление объекта</returns>
        public override string ToString() { return "PointStruct(" + X + "," + Y + "," + Z + ")"; }

        /// <summary>
        /// Координата X
        /// </summary>
        public double X { get; set; }

        /// <summary>
        /// Координата Y
        /// </summary>
        public double Y { get; set; }

        /// <summary>
        /// Координата Z
        /// </summary>
        public double Z { get; set; }
    }
}
