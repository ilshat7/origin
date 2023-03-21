#include "camel.h"

Camel::Camel(int distance)
{
	this->distance = distance; // - ����������
	this->name = "�������"; // - �������� ����������
	
	this->speed = 10; // - �������� ����������
	this->pause_distance = 30; // - ����� �������� �� ������
	
	this->pause_count = (distance / speed) / pause_distance; // - ������� ���������
	this->pause_time = 5 + (pause_count - 1) * 8; // - ����� ������

	this->travel_time = (distance / speed) + pause_time; // - ����� ����� ��������
	
}