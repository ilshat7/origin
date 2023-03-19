#pragma once
#include "Figure.h"

class Quadrangle : public Figure
{
public:
	FIGURELIBRARY_API Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
	std::string get_sides() override;
	std::string get_angle() override;

	int get_a() { return a; }
	int get_b() { return b; }
	int get_c() { return c; }
	int get_d() { return d; }

	int get_A() { return A; }
	int get_B() { return B; }
	int get_C() { return C; }
	int get_D() { return D; }
protected:
	int a, b, c, d;
	int A, B, C, D;
};
