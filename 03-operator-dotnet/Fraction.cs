using System.Numerics;

namespace _03_operator_dotnet
{
    /// <summary>
    /// Дробь
    /// </summary>
    public class Fraction
    {
        /// <summary>
        /// Конструктор дроби
        /// </summary>
        /// <param name="numenator">числитель</param>
        /// <param name="denuminator">знаменатель</param>
        public Fraction(BigInteger numenator, BigInteger denuminator)
        {
            Numenator = numenator;
            Denuminator = denuminator;
            Normalize();
        }

        /// <summary>
        /// Перегрузка оператора "+"
        /// </summary>
        /// <param name="lhs">левый операнд</param>
        /// <param name="rhs">правый операнд</param>
        /// <returns>Новый объект дроби</returns>
        public static Fraction operator +(Fraction lhs, Fraction rhs)
        {
            BigInteger numenator = lhs.Numenator * rhs.Denuminator + rhs.Numenator * lhs.Denuminator;
            BigInteger denuminator = lhs.Denuminator * rhs.Denuminator;
            return new Fraction(numenator, denuminator);
        }

        /// <summary>
        /// Перегрузка оператора "++"
        /// </summary>
        public static Fraction operator ++(Fraction obj)
        {
            return new Fraction(obj.Numenator + obj.Denuminator, obj.Denuminator);  // +1
        }

        public override string ToString()
        {
            return Numenator + "/" + Denuminator;
        }

        /// <summary>
        /// Числитель
        /// </summary>
        public BigInteger Numenator { get; private set; }

        /// <summary>
        /// Знаменатель
        /// </summary>
        public BigInteger Denuminator
        {
            get { return m_denuminator; }
            set { ValidateDenuminator(value); m_denuminator = value; }
        }

        private BigInteger m_denuminator;

        private static void ValidateDenuminator(BigInteger denuminator)
        {
            if (denuminator == 0)
            {
                throw new ArgumentException("denuminator");
            }
        }

        /// <summary>
        /// Нормализовать число
        /// </summary>
        private void Normalize()
        {
            BigInteger gcd = BigInteger.GreatestCommonDivisor(Numenator, Denuminator);
            Numenator /= gcd;
            Denuminator /= gcd;
        }
    }
}
