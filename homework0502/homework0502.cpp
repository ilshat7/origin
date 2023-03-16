#include <iostream>
#include <string>

class Figure
{
public:
	Figure() { sides_count = 0; }
	int get_sides_count() { return sides_count; }
	std::string get_name() { return name; }
	virtual std::string get_sides() { return ""; }
	virtual std::string get_angle() { return ""; }
protected:
	int sides_count;
	std::string name = "Фигура";
};

//Треугольники

class Triangle : public Figure
{
public:
	Triangle(int a,int b,int c,int A,int B,int C) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
		sides_count = 3;
		name = "Треугольник";
	}
 
	std::string get_sides() override {
		return "Стороны: a = " + std::to_string(a) + " b = " + std::to_string(b) + " c = " + std::to_string(c);
	}
	std::string get_angle() override {
		return "Углы: A = " + std::to_string(A) + " B = " + std::to_string(B) + " C = " + std::to_string(C);
	}

	
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

class Right_triangle : public Triangle
{
public:
	Right_triangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) { name = "Прямоугольный треугольник"; }
};

class Isosceles_triangle : public Triangle
{
public:
	Isosceles_triangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A) { name = "Равнобедренный треугольник"; }
};

class Equilateral_triangle : public Triangle
{
public:
	Equilateral_triangle(int a) : Triangle(a, a, a, 60, 60, 60) { name = "Равносторонний треугольник"; }
};

//Четырёхугольники
class Quadrangle : public Figure
{
public:
	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
		sides_count = 4; 
		name = "Четырёхугольник";
	}
	std::string get_sides() override {
		return "Стороны: a = " + std::to_string(a) + " b = " + std::to_string(b) + " c = " + std::to_string(c) + " d = " + std::to_string(d);
	}
	std::string get_angle() override {
		return "Углы: A = " + std::to_string(A) + " B = " + std::to_string(B) + " C = " + std::to_string(C) + " D = " + std::to_string(D);
	}

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

class Square : public Quadrangle
{
public:
	Square(int a) : Quadrangle(a, a, a, a, 90, 90, 90, 90) { name = "Квадрат"; }
};

class Parallelogram : public Quadrangle
{
public:
	Parallelogram(int a, int b, int A, int B) : Quadrangle(a, b, a, b, A, B, A, B) { name = "Параллелограмм"; }
};

class Rectangle : public Parallelogram
{
public:
	Rectangle(int a, int b) : Parallelogram(a, b, 90, 90) { name = "Прямоугольник"; }
};

class Rhombus : public Parallelogram
{
public:
	Rhombus(int a, int A, int B) : Parallelogram(a, a, A, B) { name = "Ромб"; }
};

void print_info(Figure * figure) {
	std::cout << figure->get_name() << std::endl;
	std::cout << figure->get_sides() << std::endl;
	std::cout << figure->get_angle() << std::endl;
	std::cout << std::endl;
}

int main()
{
	setlocale(0, "ru");

	Triangle tri(10,20,30,50,60,70);
	print_info(&tri);

	Right_triangle rt(10,20,30,50,60);
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