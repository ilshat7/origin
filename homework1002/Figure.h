#pragma once
#include <string>
class Figure
{
public:
	Figure();
	int get_sides_count();
	std::string get_name();
	virtual std::string get_sides();
	virtual std::string get_angle();
protected:
	int sides_count;
	std::string name = "Фигура";
};