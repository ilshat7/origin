#include <iostream>
#include "Greeter.h"

void Greeter::greet()
{
	std::cout << "������� ���: ";
	std::string name;
	std::cin >> name;
	std::cout << "������������, " << name << "!" << std::endl;

}
