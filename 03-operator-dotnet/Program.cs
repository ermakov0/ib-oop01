namespace _03_operator_dotnet
{
    public class Program
    {
        public static void Main(string[] args)
        {
            Fraction f1 = new Fraction(1, 2);
            Fraction f2 = new Fraction(1, 3);
            Fraction f3 = f1 + f2;
            Console.WriteLine(f1 + " + " + f2 + " = " + f3);

            Console.WriteLine(f1 + " " + f2);
            Fraction f11 = ++f1;
            Fraction f22 = f2++;
            Console.WriteLine(f1 + " " + f2);
            Console.WriteLine(f11 + " " + f22);
        }
    }
}
