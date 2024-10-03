/*
* Конструкторы
*/
namespace _03_constructor_dotnet
{
    public class Program
    {
        public static void Main(string[] args)
        {
            Point point3 = new Point();
            Point point4 = new Point(1.0);
            Point point5 = new Point(1.0, 2.0);

            Console.WriteLine(point3 + " " + point4 + " " + point5);
        }
    }
}
