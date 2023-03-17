#include <iostream>
#include <string>

class Figure
{
public:
	Figure() { sides_count = 0; }
	int get_sides_count() { return sides_count; }
	std::string get_name() { return name; }
	virtual std::string get_sides() { return ""; }
	virtual std::string get_angles() { return ""; }
	virtual void print_info() {
		std::cout << name << ":\n";
		std::cout << "Количество сторон: " << sides_count << "\n";
		check() ? std::cout << "Правильная\n" : std::cout << "Неправильная\n";
		std::cout << std::endl;
	}
	virtual bool check() {
		return sides_count == 0;
	}
protected:
	int sides_count;
	std::string name = "Фигура";
};

//Треугольники

class Triangle : public Figure
{
public:
	Triangle(int a, int b, int c, int A, int B, int C) {
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
	std::string get_angles() override {
		return "Углы: A = " + std::to_string(A) + " B = " + std::to_string(B) + " C = " + std::to_string(C);
	}

	int get_a() { return a; }
	int get_b() { return b; }
	int get_c() { return c; }

	int get_A() { return A; }
	int get_B() { return B; }
	int get_C() { return C; }

	bool check() override {
		return ((A + B + C == 180) && (sides_count == 3));
	}
	void print_info() override {
		std::cout << name << ":\n";
		std::cout << "Количество сторон: " << sides_count << "\n";
		std::cout << get_sides() << "\n";
		std::cout << get_angles() << "\n";
		check() ? std::cout << "Правильная\n" : std::cout << "Неправильная\n";
		std::cout << std::endl;
	}
protected:
	int a, b, c;
	int A, B, C;
};

class Right_triangle : public Triangle
{
public:
	Right_triangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) { name = "Прямоугольный треугольник"; }

	bool check() override {
		return (Triangle::check() && C == 90);
	}
};

class Isosceles_triangle : public Triangle
{
public:
	Isosceles_triangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A) { name = "Равнобедренный треугольник"; }

	bool check() override {
		return (Triangle::check() && (a == c) && (A == C));
	}
};

class Equilateral_triangle : public Triangle
{
public:
	Equilateral_triangle(int a) : Triangle(a, a, a, 60, 60, 60) { name = "Равносторонний треугольник"; }

	bool check() override {
		return (Triangle::check() && (a == b) && (b == c) && (a == c) && (A == 60) && (B == 60) && (C == 60));
	}
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
	std::string get_angles() override {
		return "Углы: A = " + std::to_string(A) + " B = " + std::to_string(B) + " C = " + std::to_string(C) + " D = " + std::to_string(D);
	}

	bool check() override {
		return sides_count == 4 && (A + B + C + D) == 360;
	}

	void print_info() override {
		std::cout << name << ":\n";
		std::cout << "Количество сторон: " << sides_count << "\n";
		std::cout << get_sides() << "\n";
		std::cout << get_angles() << "\n";
		check() ? std::cout << "Правильная\n" : std::cout << "Неправильная\n";
		std::cout << std::endl;
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

	bool check() override {
		return Quadrangle::check() && (a == b && b == c && c == d && a == d) && (A == 90 && B == 90 && C == 90 && D == 90);
	}
};

class Parallelogram : public Quadrangle
{
public:
	Parallelogram(int a, int b, int A, int B) : Quadrangle(a, b, a, b, A, B, A, B) { name = "Параллелограмм"; }

	bool check() override {
		return Quadrangle::check() && (a == c && b == d) && (A == C && B == D);
	}
};

class Rectangle : public Parallelogram
{
public:
	Rectangle(int a, int b) : Parallelogram(a, b, 90, 90) { name = "Прямоугольник"; }

	bool check() override {
		return Quadrangle::check() && (a == c && b == d) && (A == 90 && B == 90 && C == 90 && D == 90);
	}
};

class Rhombus : public Parallelogram
{
public:
	Rhombus(int a, int A, int B) : Parallelogram(a, a, A, B) { name = "Ромб"; }

	bool check() override {
		return Quadrangle::check() && (a == b && b == c && c == d && a == d) && (A == C && B == D);
	}
};

int main()
{
	setlocale(0, "ru");

	Figure f;
	Figure* ptr = &f;
	ptr->print_info();

	Triangle tri(10, 20, 30, 50, 60, 70);
	ptr = &tri;
	ptr->print_info();
	 
	Right_triangle rt(10, 20, 30, 50, 60);
	ptr = &rt;
	ptr->print_info();


	Isosceles_triangle it(10, 20, 50, 60);
	ptr = &it;
	ptr->print_info();

	Equilateral_triangle et(30);
	ptr = &et;
	ptr->print_info();

	Quadrangle quadr(10, 20, 30, 40, 50, 60, 70, 80);
	ptr = &quadr;
	ptr->print_info();

	Rectangle ra(10, 20);
	ptr = &ra;
	ptr->print_info();

	Square sq(20);
	ptr = &sq;
	ptr->print_info();

	Parallelogram pg(20, 30, 30, 40);
	ptr = &pg;
	ptr->print_info();

	Rhombus rh(30, 30, 40);
	ptr = &rh;
	ptr->print_info();
}