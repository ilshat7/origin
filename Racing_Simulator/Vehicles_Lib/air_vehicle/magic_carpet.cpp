#include "magic_carpet.h"

int MagicCarpet::ReductionFactor()
{
	if (distance < 1000)
	{
		return distance;
	}
	else if (distance < 5000)
	{
		return distance * 0.03;
	}
	else if (distance < 10000)
	{
		return distance * 0.1;
	}
	else if (distance >= 10000)
	{
		return distance * 0.05;
	}
	return 0;
}
MagicCarpet::MagicCarpet(int distance)
{
	this->distance = distance; // - ����������
	this->name = "�����-�������"; // - �������� ����������

	this->speed = 10; // - �������� ����������

	this->travel_time = (distance - ReductionFactor()) / speed; // - ����� ����� ��������

}