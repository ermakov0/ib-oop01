/**
 * Примеры геттеров/сеттеров и свойств класса на C#
*/
namespace _02_dotnet_property
{
    public class Program
    {
        /// <summary>
        /// Точка входа в программу
        /// </summary>
        /// <param name="args">Аргументы командной строки</param>
        public static void Main(string[] args)
        {
            Point point = new Point();
            Console.WriteLine(point);
            point.Init(1.0, 2.0, 3.0);
            Console.WriteLine(point);
        }
    }
}
