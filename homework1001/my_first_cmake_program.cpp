#include <iostream>

int main()
{
	setlocale(0, "ru");
	std::cout << "������� ���: ";
	std::string name;
	std::cin >> name;
	std::cout << "������������, " << name << std::endl;
	return 0;
}