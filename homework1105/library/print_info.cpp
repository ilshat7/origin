#include <iostream>
#include "print_info.h"

void print_info(Figure* figure)
{
	std::cout << figure->get_name() << std::endl;
	std::cout << figure->get_sides() << std::endl;
	std::cout << figure->get_angle() << std::endl;
	std::cout << std::endl;
}
