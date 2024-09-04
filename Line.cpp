#include <sstream>
#include <string>
#include <cmath>
#include <iostream>
#include "Point.h"
#include "Line.h"

Line::Line(const Point& begin, const Point& end) : m_begin{ begin }, m_end(end) {  // здесь у Point вызывается конструктор копирования
    std::cout << ">Line::Line(&" << begin.toString() << ", &" << end.toString() << ")" << std::endl;
}

//Line::Line(const Point& begin, const Point& end) {
//    // если конструктор написать так, то для каждого скрытого поля
//    // сначала вызовется КОНСТРУКТОР ПО УМОЛЧАНИЮ
//    // и только затем произойдёт присваивание
//    std::cout << ">Line::Line(&" << begin.toString() << ", &" << end.toString() << ")" << std::endl;
//    setBegin(begin);
//    setEnd(end);
//}

Line::~Line() {
    std::cout << ">Line::~Line()" << std::endl;
}

//void Line::setBegin(const Point& begin) {
//    std::cout << ">Line::setBegin(&" << begin.toString() << ")" << std::endl;
//    // здесь у Point вызывается конструктор копирования
//    m_begin = begin;
//}
//
//void Line::setEnd(const Point& end) {
//    std::cout << ">Line::setEnd(&" << end.toString() << ")" << std::endl;
//    // здесь у Point вызывается конструктор копирования
//    m_end = end;
//}

const Point& Line::getBegin() const {
    std::cout << ">Line::getBegin()" << std::endl;
    return m_begin;
}

const Point& Line::getEnd() const {
    std::cout << ">Line::getEnd()" << std::endl;
    return m_end;
}

double Line::getLenght() const {
    std::cout << ">Line::getLenght()" << std::endl;
    const Point& begin = getBegin();
    const Point& end = getEnd();
    double result = std::sqrt(
        std::pow(end.getX() - begin.getX(), 2) +
        std::pow(end.getY() - begin.getY(), 2)
    );
    return result;
}

void Line::display() const {
    std::cout << ">Line::display()" << std::endl;
    std::cout << toString() << std::endl;
}

std::string Line::toString() const {
    std::cout << ">Line::toString()" << std::endl;
    std::ostringstream os;
    os << "Point(" << getBegin().toString() << ", " << getEnd().toString() << ")";
    return os.str();
}
