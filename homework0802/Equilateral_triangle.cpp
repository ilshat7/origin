#include <iostream>
#include "Equilateral_triangle.h"
#include "FigureException.h"


Equilateral_triangle::Equilateral_triangle(int a) :Triangle(a, a, a, 60, 60, 60, "�������������� �����������") {
    if (!((a == get_b())&&(a== get_c()))) throw FigureException("������ �������� ������. �������: ��� ������� �� �����.");
    if (!((get_A() == 60) && (get_B() == 60) && (get_C() == 60))) throw FigureException("������ �������� ������. �������: ��� ���� �� ����� 60.");
}
    