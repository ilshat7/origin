#include <iostream>
#include "Isosceles_triangle.h"
#include "FigureException.h"


Isosceles_triangle::Isosceles_triangle(int a, int b, int A, int B) :Triangle(a, b, a, A, B, A, "�������������� �����������") {
    if (!(a == get_c())) throw FigureException("������ �������� ������. �������: ������� a � c �� �����.");
    if (!(A == get_C())) throw FigureException("������ �������� ������. �������: ���� A � C �� �����.");
}
    