#include <iostream>

int main()
{
	setlocale(0, "ru");
	std::cout << "Введите имя: ";
	std::string name;
	std::cin >> name;
	std::cout << "Здравствуйте, " << name << std::endl;
	return 0;
}