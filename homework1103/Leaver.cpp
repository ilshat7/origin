#include <iostream>
#include"Leaver.h"

void Leaver::leave()
{
	std::cout << "Введите имя: ";
	std::string name;
	std::cin >> name;
	std::cout << "До свидания, " << name << "!";
}
