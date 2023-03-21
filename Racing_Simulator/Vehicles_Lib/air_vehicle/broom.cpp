#include "broom.h"

double Broom::ReductionFactor()
{
	int redFact = distance / 1000;
	return (distance * redFact / 100);

}
Broom::Broom(int distance)
{
	this->distance = distance; // - ����������
	this->name = "�����"; // - �������� ����������

	this->speed = 20; // - �������� ����������

	this->travel_time = (distance - ReductionFactor()) / speed; // - ����� ����� ��������

}