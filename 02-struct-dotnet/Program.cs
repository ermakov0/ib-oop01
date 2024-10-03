/*
 * Разница между class и struct 
*/
namespace _02_dotnet_struct
{
    public class Program
    {
        public static void Main(string[] args)
        {
            Point point = new Point();
            point.Init(1.0, 2.0, 3.0);
            Point point2 = point;
            Console.WriteLine(point + "; " + point2);
            point.X = 0.0;
            Console.WriteLine(point + "; " + point2);

            PointStruct pointStr = new PointStruct();
            pointStr.Init(1.0, 2.0, 3.0);
            PointStruct pointStr2 = pointStr;
            Console.WriteLine(pointStr + "; " + pointStr2);
            pointStr.X = 0.0;
            Console.WriteLine(pointStr + "; " + pointStr2);
        }
    }
}

