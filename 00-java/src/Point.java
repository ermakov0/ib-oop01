import java.util.Scanner;

/**
 * 2D точка
 */
public class Point {
//    /**
//     * Конструктор по умолчанию
//     */
//    public Point() {
//        System.err.println(">Point()");
//        setX(0.0);
//        setY(0.0);
//    }

    /**
     * Конструктор с параметрами
     *
     * @param x Координата X
     * @param y Координата Y
     */
    public Point(double x, double y) {
        System.err.println(">Point(" + x + ", " + y + ")");
        setX(x);
        setY(y);
    }

    /**
     * Получить текстовое представление объекта
     *
     * @return Текстовое представление объекта
     */
    @Override
    public String toString() {
        return "Point(" + getX() + ", " + getY() + ")";
    }

    /**
     * Инициализатор объекта из стандартного потока ввода
     *
     * @return Сконструированный объект из данных
     */
    public static Point read() {
        System.err.println(">Point.read()");
        Scanner scan = new Scanner(System.in);
        System.out.print("Введите x: ");
        double x = scan.nextDouble();
        System.out.print("Введите y: ");
        double y = scan.nextDouble();
        return new Point(x, y);
    }

    public Point minus(Point rhs) {
        return new Point(getX() - rhs.getX(), getY() - rhs.getY());
    }

    public double getX() {
        System.err.println(">Point.getX()");
        return m_x;
    }

    public double getY() {
        System.err.println(">Point.getY()");
        return m_y;
    }

    public void setX(double x) {
        System.err.println(">Point.setX(" + x + ")");
        m_x = x;
    }

    public void setY(double y) {
        System.err.println(">Point.setY(" + y + ")");
        m_y = y;
    }

    /**
     * Координата X
     */
    private double m_x;

    /**
     * Координата Y
     */
    private double m_y;
}
