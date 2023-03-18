#include <iostream>
#include "Rectangle.h"
#include "FigureException.h"


Rectangle::Rectangle(int a, int b) :Quadrangle(a, b, a, b, 90, 90, 90, 90, "�������������") {
    if ((get_a() != get_c()) || (get_b() != get_d())) throw FigureException("������ �������� ������. �������: ������� a,c � b,d ������� �� �����.");
    if ((get_A() != 90) || (get_B() != 90) || (get_C() != 90) || (get_D() != 90)) throw FigureException("������ �������� ������. �������: ��� ���� �� ����� 90.");
}
Rectangle::Rectangle(int a) :Quadrangle(a, a, a, a, 90, 90, 90, 90, "�������") {}
   