/**
 * 2D отрезок
 */
public class Line {

    /**
     * Конструктор с параметрами
     *
     * @param begin 2D точка начала отрезка
     * @param end   2D точка конца отрезка
     */
    public Line(Point begin, Point end) {
        System.err.println(">Line(" + begin + ", " + end + ")");
        setBegin(begin);
        setEnd(end);
    }

    /**
     * Вычислить длину отрезка
     *
     * @return Длина отрезка по координатам двух 2D точек
     */
    public double getLength() {
        System.err.println(">Line.getLength()");
        Point begin = getBegin();
        Point end = getEnd();
        double x2 = Math.pow(end.getX() - begin.getX(), 2);
        double y2 = Math.pow(end.getY() - begin.getY(), 2);
        return Math.sqrt(x2 + y2);
    }

    /**
     * Получить текстовое представление объекта
     *
     * @return Текстовое представление объекта
     */
    @Override
    public String toString() {
        return "Line(" + getBegin() + ", " + getEnd() + ")";
    }

    /**
     * Инициализатор объекта из стандартного потока ввода
     *
     * @return Сконструированный объект из данных
     */
    public static Line read() {
        System.err.println(">Line.read()");
        System.out.println("Введите координаты начала отрезка:");
        Point begin = Point.read();
        System.out.println("Введите координаты конца отрезка:");
        Point end = Point.read();
        return new Line(begin, end);
    }

    public Point getBegin() {
        System.err.println(">Line.getBegin()");
        return m_begin;
    }

    public Point getEnd() {
        System.err.println(">Line.getEnd()");
        return m_end;
    }

    public void setBegin(Point begin) {
        System.err.println(">Line.setBegin(" + begin + ")");
        m_begin = begin;
    }

    public void setEnd(Point end) {
        System.err.println(">Line.setEnd(" + end + ")");
        m_end = end;
    }

    /**
     * Координаты начала отрезка
     */
    private Point m_begin;

    /**
     * Координаты конца отрезка
     */
    private Point m_end;
}
