#pragma once
#include <string>

#ifdef FIGURE_EXPORTS
#define FIGURELIBRARY_API __declspec(dllexport)
#else
#define FIGURELIBRARY_API __declspec(dllimport)
#endif

class Figure
{
public:
	FIGURELIBRARY_API Figure();
	int get_sides_count();
	std::string get_name();
	virtual std::string get_sides();
	virtual std::string get_angle();
protected:
	int sides_count;
	std::string name = "Фигура";
};