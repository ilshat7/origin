#include "Figure.h"

Figure::Figure()
{
	sides_count = 0;
}

int Figure::get_sides_count()
{
	return sides_count;
}

std::string Figure::get_name()
{
	return name;
}

std::string Figure::get_sides()
{
	return "";
}

std::string Figure::get_angle()
{
	return "";
}
