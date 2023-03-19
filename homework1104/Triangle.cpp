#include "Triangle.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
	sides_count = 3;
	name = "Треугольник";
}

std::string Triangle::get_sides()
{
	return "Стороны: a = " + std::to_string(a) + " b = " + std::to_string(b) + " c = " + std::to_string(c);
}

std::string Triangle::get_angle()
{
	return "Углы: A = " + std::to_string(A) + " B = " + std::to_string(B) + " C = " + std::to_string(C);
}
