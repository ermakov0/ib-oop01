namespace _03_exception_dotnet
{
    public class Program
    {
        public static void Main(string[] args)
        {
            Ball100 ball = new Ball100(42);
            Console.WriteLine(ball.Val);

            try
            {
                Ball100 ball2 = new Ball100(-42);
                Console.WriteLine(ball2.Val);
            }
            catch (ArgumentOutOfRangeException ex)
            {
                Console.WriteLine("Ошибка: " + ex.Message);
            }
            finally
            {
                Console.WriteLine("finally");
            }
        }
    }
}
