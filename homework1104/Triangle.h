#pragma once
#include "Figure.h"

class Triangle : public Figure
{
public:
	Triangle(int a, int b, int c, int A, int B, int C);

	std::string get_sides() override;
	std::string get_angle() override;


	int get_a() { return a; }
	int get_b() { return b; }
	int get_c() { return c; }

	int get_A() { return A; }
	int get_B() { return B; }
	int get_C() { return C; }
protected:
	int a, b, c;
	int A, B, C;
};
