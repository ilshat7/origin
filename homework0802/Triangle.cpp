#include <iostream>
#include "FigureException.h"
#include "Triangle.h"


Triangle::Triangle(int a, int b, int c, int A, int B, int C, std::string name) :Figure(3, name)
{
    if (!(get_sides() == 3)) throw FigureException("������ �������� ������. �������: ���������� ������ �� ����� 3.");
    if (!((A + B + C) == 180)) throw FigureException("������ �������� ������. �������: ����� ����� �� ����� 180.");

    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
}

    int Triangle::get_a() {
        return a;
    }
    int Triangle::get_b() {
        return b;
    }
    int Triangle::get_c() {
        return c;
    }
    int Triangle::get_A() {
        return A;
    }
    int Triangle::get_B() {
        return B;
    }
    int Triangle::get_C() {
        return C;
    }
    void Triangle::print() {
        std::cout << get_name() << ": " << std::endl;
        std::cout << "���������� ������: " << get_sides() << std::endl;
        std::cout << "�������: " << "a=" << get_a() << " b=" << get_b() << " c=" << get_c() << std::endl;
        std::cout << "����: " << "A=" << get_A() << " B=" << get_B() << " C=" << get_C() << std::endl;
        std::cout << std::endl;
    }
    