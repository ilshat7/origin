#include <iostream>
#include "Calculator.h"


int main()
{
	setlocale(0, "ru");

	std::cout << "Введите первое число: ";
	int num1;
	std::cin >> num1;
	std::cout << "Введите второе число: ";
	int num2;
	std::cin >> num2;
	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	int operation;
	std::cin >> operation;

	switch (operation)
	{
	case 1:
		std::cout << num1 << " + " << num2 << " = " << addition(num1, num2);
		break;
	case 2:
		std::cout << num1 << " - " << num2 << " = " << subtraction(num1, num2);
		break;
	case 3:
		std::cout << num1 << " * " << num2 << " = " << multiplication(num1, num2);
		break;
	case 4:
		std::cout << num1 << " / " << num2 << " = " << division(num1, num2);
		break;
	case 5:
		std::cout << num1 << " в степени " << num2 << " = " << exponentiation(num1, num2);
		break;
	default:
		std::cout << "Ошибка! Введите целое число от 1 - 5";
		break;
	}

	return 0;
}