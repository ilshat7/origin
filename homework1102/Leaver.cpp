#include <iostream>
#include"Leaver.h"

void Leaver::leave()
{
	std::cout << "������� ���: ";
	std::string name;
	std::cin >> name;
	std::cout << "�� ��������, " << name << "!";
}
