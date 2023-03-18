#include <iostream>
#include "Parallelogram.h"
#include "FigureException.h"


Parallelogram::Parallelogram(int a, int b, int A, int B) :Quadrangle(a, b, a, b, A, B, A, B, "��������������") {
    if ((get_a() != get_c()) || (get_b() != get_d())) throw FigureException("������ �������� ������. �������: ������� a,c � b,d ������� �� �����.");
    if ((get_A() != get_C()) || (get_B() != get_D())) throw FigureException("������ �������� ������. �������: ���� A,C � B,D ������� �� �����.");
}
Parallelogram::Parallelogram(int a, int A, int B) :Quadrangle(a, a, a, a, A, B, A, B, "����") {}
   