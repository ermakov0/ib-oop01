/*
 * Перегрузка методов
 */
namespace _03_dotnet_override
{
    public class Program
    {
        public static void Main(string[] args)
        {
            Line line = new Line();
            line.Init(2.0, 4.0);
            Console.WriteLine(line);
            Console.WriteLine(line.GetLenght());

            double result;
            /*
            result = 0.0;
            line.GetLenght(ref result);
            Console.WriteLine(result);
            */

            result = 0.0;
            line.GetLenght(out result);
            Console.WriteLine(result);
        }
    }
}
