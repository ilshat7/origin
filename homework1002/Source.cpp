#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Square.h"
#include "Rhombus.h"
#include "print_info.h"

int main()
{
	setlocale(0, "ru");

	Triangle tri(10, 20, 30, 50, 60, 70);
	print_info(&tri);

	Right_triangle rt(10, 20, 30, 50, 60);
	print_info(&rt);

	Isosceles_triangle it(10, 20, 50, 60);
	print_info(&it);

	Equilateral_triangle et(30);
	print_info(&et);

	Quadrangle quadr(10, 20, 30, 40, 50, 60, 70, 80);
	print_info(&quadr);

	Rectangle ra(10, 20);
	print_info(&ra);

	Square sq(20);
	print_info(&sq);

	Parallelogram pg(20, 30, 30, 40);
	print_info(&pg);

	Rhombus rh(30, 30, 40);
	print_info(&rh);
}