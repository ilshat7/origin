#pragma once

#include "vehicle.h"

class Ground_Vehicle: public Vehicle
{
	protected:

		double pause_time; // - ����� ������
		double pause_distance; // - ����� �������� �� ������
		int pause_count; // - ������� ���������

public:
		Ground_Vehicle();
};