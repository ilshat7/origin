#include <iostream>
#include "Greeter.h"

void Greeter::greet()
{
	std::cout << "Введите имя: ";
	std::string name;
	std::cin >> name;
	std::cout << "Здравствуйте, " << name << "!" << std::endl;

}
