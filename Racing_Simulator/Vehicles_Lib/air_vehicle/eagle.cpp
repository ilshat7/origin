#include "eagle.h"

int Eagle::ReductionFactor()
{

		return distance * 0.06;

}
Eagle::Eagle(int distance)
{
	this->distance = distance; // - ����������
	this->name = "����"; // - �������� ����������

	this->speed = 8; // - �������� ����������

	this->travel_time = (distance - ReductionFactor()) / speed; // - ����� ����� ��������

}