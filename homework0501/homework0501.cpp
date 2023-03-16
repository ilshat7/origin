#include <iostream>

class Figure
{
public:
	Figure() { sides_count = 0; }
	int get_sides_count() { return sides_count; }
	std::string get_name() { return name; }
protected:
	int sides_count;
	std::string name = "Фигура";
};

class Triangle : public Figure
{
public:
	Triangle() { 
		sides_count = 3;
		name = "Треугольник";
	}
};

class Quadrangle : public Figure
{
public:
	Quadrangle() { 
		sides_count = 4; 
		name = "Квадрат";
	}
};

int main()
{
	setlocale(0, "ru");
	Figure fig;
	std::cout << fig.get_name() <<": " << fig.get_sides_count() << std::endl;

	Triangle tri;
	std::cout << tri.get_name() << ": " << tri.get_sides_count() << std::endl;

	Quadrangle quadr;
	std::cout << quadr.get_name() << ": " << quadr.get_sides_count() << std::endl;

}