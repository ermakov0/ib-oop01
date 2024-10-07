public class Main {
    /**
     * Точка входа в программу
     *
     * @param args Аргументы командной строки
     */
    public static void main(String[] args) {
        // первая точка вводится с клавиатуры
        Point p1 = Point.read();
        // вторая точка использует конструктор с параметрами
        Point p2 = new Point(1.5, 4.2);

        System.out.println("Точка p1: " + p1);
        System.out.println("Точка p2: " + p2);

//        Point p3 = p1 - p2;
        Point p3 = p1.minus(p2);
        System.out.println("Разность точек: " + p3);

        Line line = new Line(p1, p2);
        System.out.println("Отрезок line: " + line);
        System.out.println("Длина отрезка line: " + line.getLength());

        Line line2 = Line.read();
        System.out.println("Отрезок line2: " + line2);
    }
}
