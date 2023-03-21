#include <iostream>
#include <string>
#include "Vehicles_Lib/vehicle.h"

#include "Vehicles_Lib/ground_vehicle.h"
#include "Vehicles_Lib/ground_vehicle/camel.h"
#include "Vehicles_Lib/ground_vehicle/speed_camel.h"
#include "Vehicles_Lib/ground_vehicle/centaur.h"
#include "Vehicles_Lib/ground_vehicle/all_terrain_boots.h"

#include "Vehicles_Lib/air_vehicle.h"
#include "Vehicles_Lib/air_vehicle/magic_carpet.h"
#include "Vehicles_Lib/air_vehicle/eagle.h"
#include "Vehicles_Lib/air_vehicle/broom.h"



void quick_sort(Vehicle* arr, int size) {

	int left = 0;
	int right = size - 1;

	Vehicle mid = arr[size / 2];

	do {

		while (arr[left].TravelTime() < mid.TravelTime()) {
			left++;
		}

		while (arr[right].TravelTime() > mid.TravelTime()) {
			right--;
		}

		if (left <= right) {

			std::swap(arr[left], arr[right]);

			left++;
			right--;
		}
	} while (left <= right);

	if (right > 0) {

		quick_sort(arr, right + 1);
	}
	if (left < size) {

		quick_sort(&arr[left], size - left);
	}
}

bool Proverka(Vehicle* arr, int count, Vehicle name)
{
	for (int i = 0; i < count; i++) {
		if (arr[i].GetName() == name.GetName()) {
			return false;
		}
	}
	return true;
}

void PrintList(Vehicle* arr, int count) {
	int a = 1;
	for (int i = 0; i < count; ++i) {
		std::cout << a << ". " << arr[i].GetName() << " - �����: " << arr[i].TravelTime() << std::endl;
		++a;
	}
}

int GameMod(int t)
{
	if (t == 1)
	{
		return 1;
	}
	else if (t == 2)
	{
		return 2;
	}
	else if (t == 3)
	{
		return 3;
	}
	return 0;
}

void ErrorFun(int num)
{
	if (num == 0)
	{
		std::cout << "�� �����!" << std::endl;
		std::cout << std::endl;
	}
	else
		if (num == 1)
		{
			std::cout << "�� ������ ��� �����!" << std::endl;
			std::cout << std::endl;
		}
		else
			if (num == 2)
			{
				std::cout << "�� ������ ��� ����������!" << std::endl;
				std::cout << std::endl;
			}
			else
				if (num == 3)
				{
					std::cout << "������ ���� ���������������� ���� �� 2 ������������ ��������!" << std::endl;
					std::cout << std::endl;
				}
}

void NameDuplication(Vehicle& name)
{
	std::cout << name.GetName() << " ��� ���������������!" << std::endl;
}

void transportList()
{
	std::cout << "1.�������" << std::endl;
	std::cout << "2.�������-���������" << std::endl;
	std::cout << "3.�������" << std::endl;
	std::cout << "4.�������-���������" << std::endl;
	std::cout << "5.�����-�������" << std::endl;
	std::cout << "6.����" << std::endl;
	std::cout << "7.�����" << std::endl;
	std::cout << "0.��������� �����������" << std::endl;
}

void RaceType(int i, int tmp_i, int count, int distance, int race_type, Vehicle* arr)
{
	if (i > tmp_i && i != tmp_i)
	{

		std::cout << arr[i - 1].GetName() << " ������� ���������������!" << std::endl;
	}
	if (race_type == 1)
	{
		std::cout << "����� ��� ��������� ����������!����������: " << distance << std::endl;
	}
	else
		if (race_type == 2)
		{
			std::cout << "����� ��� ���������� ����������! ����������: " << distance << std::endl;
		}
		else
			if (race_type == 3)
			{
				std::cout << "����� ��� ��������� � ���������� ����������! ����������: " << distance << std::endl;
			}

	if (count >= 1)
	{
		std::cout << "������������������ ������������ ��������: ";

		for (int i = 0; i < count; i++)
		{
			if (i >= 1) { std::cout << ", "; }
			std::cout << arr[i].GetName();

		}
		std::cout << std::endl;
	}

}

int main()
{
	setlocale(LC_ALL, "Russian");
	bool restart = true;
	while (restart == true) {
		system("cls");
		std::cout << "����� ���������� � �������� ���������!" << std::endl;

		std::cout << "1.����� ��� ��������� ����������" << std::endl;
		std::cout << "2.����� ��� ���������� ����������" << std::endl;
		std::cout << "3.����� ��� ��������� � ���������� ����������" << std::endl;


		int race_type = 0;

		while (race_type <= 0 || race_type > 3)
		{
			std::cout << "�������� ��� �����: ";
			std::cin >> race_type;
			if (race_type > 0 && race_type <= 3) {
				GameMod(race_type);
			}
			else
			{
				ErrorFun(1);
			}
		}

		std::cout << std::endl;
		system("cls");

		int distance = 0;
		while (distance <= 0) {
			std::cout << "������� ����� ���������(������ ���� ������������): ";
			std::cin >> distance;
			std::cout << std::endl;
		}
		system("cls");
		//-----------------GROUND---------------------
		Camel camel(distance);

		SpeedCamel speed_camel(distance);

		Centaur centaur(distance);

		AllTerrainBoots all_terrain_boots(distance);

		//-----------------AIR------------------------

		MagicCarpet magic_carpet(distance);

		Eagle eagle(distance);

		Broom broom(distance);

		std::cout << "������ ���� ���������������� ���� �� 2 ������������ ��������" << std::endl;

		std::cout << std::endl;

		unsigned int size = 7;
		int count = 0;


		Vehicle* arr = new Vehicle[size]();

		int i = 0;
		int tmp_i = 0;
		int reg_start = 0;
		bool start_game = false;

		do
		{
			int end = 1;

			if (count <= 0) {
				std::cout << "1.���������������� ���������" << std::endl;
			}
			else
			{
				std::cout << "1.���������������� ���������" << std::endl;
				std::cout << "2.������ �����" << std::endl;
			}

			std::cout << "�������� ��������: ";
			std::cin >> reg_start;

			std::cout << std::endl;
			system("cls");
			if (reg_start != 1 && count <= 0)
			{
				std::cout << "������� 1!" << std::endl;
			}
			else
				if (reg_start != 1 && reg_start != 2)
				{
					std::cout << "������� 1 ��� 2!" << std::endl;
				}
				else
					if (reg_start == 1)
					{
						do {

							if (race_type == 1)
							{
								RaceType(i, tmp_i, count, distance, race_type, arr);
							}
							if (race_type == 2)
							{
								RaceType(i, tmp_i, count, distance, race_type, arr);
							}
							if (race_type == 3)
							{
								RaceType(i, tmp_i, count, distance, race_type, arr);
							}

							transportList();

							int num;
							std::cout << "�������� ��������� ��� 0 ��� ��������� �����������: ";
							std::cin >> num;
							std::cout << std::endl;
							system("cls");
							if (num < 0 || num > 7) {
								ErrorFun(0);
							}
							else
							{
								switch (num)
								{
								case 1:
									if (Proverka(arr, count, camel) == true) {
										if (camel.TypeOfTransport() == GameMod(race_type) || GameMod(race_type) == 3)
										{
											arr[i] = camel;
											tmp_i = i;
											++i;
											++count;
										}
										else
										{
											ErrorFun(2);
											tmp_i = i;
										}

									}
									else {
										NameDuplication(camel);
										tmp_i = i;
									}
									break;
								case 2:
									if (Proverka(arr, count, speed_camel) == true) {
										if (speed_camel.TypeOfTransport() == GameMod(race_type) || GameMod(race_type) == 3)
										{
											arr[i] = speed_camel;
											tmp_i = i;
											++i;
											++count;
										}
										else
										{
											ErrorFun(2);
											tmp_i = i;
										}
									}
									else {
										NameDuplication(speed_camel);
										tmp_i = i;
									}

									break;
								case 3:
									if (Proverka(arr, count, centaur) == true) {
										if (centaur.TypeOfTransport() == GameMod(race_type) || GameMod(race_type) == 3)
										{
											arr[i] = centaur;
											tmp_i = i;
											++i;
											++count;
										}
										else
										{
											ErrorFun(2);
											tmp_i = i;
										}
									}
									else {
										NameDuplication(centaur);
										tmp_i = i;
									}

									break;
								case 4:
									if (Proverka(arr, count, all_terrain_boots) == true) {
										if (all_terrain_boots.TypeOfTransport() == GameMod(race_type) || GameMod(race_type) == 3)
										{
											arr[i] = all_terrain_boots;
											++i;
											++count;
										}
										else
										{
											ErrorFun(2);
											tmp_i = i;
										}
									}
									else {
										NameDuplication(all_terrain_boots);
										tmp_i = i;
									}

									break;
								case 5:
									if (Proverka(arr, count, magic_carpet) == true) {
										if (magic_carpet.TypeOfTransport() == GameMod(race_type) || GameMod(race_type) == 3)
										{
											arr[i] = magic_carpet;
											++i;
											++count;
										}
										else
										{
											ErrorFun(2);
											tmp_i = i;
										}
									}
									else {
										NameDuplication(magic_carpet);
										tmp_i = i;
									}

									break;
								case 6:
									if (Proverka(arr, count, eagle) == true) {
										if (eagle.TypeOfTransport() == GameMod(race_type) || GameMod(race_type) == 3)
										{
											arr[i] = eagle;
											++i;
											++count;
										}
										else
										{
											ErrorFun(2);
											tmp_i = i;
										}
									}
									else {
										NameDuplication(eagle);
										tmp_i = i;
									}

									break;
								case 7:
									if (Proverka(arr, count, broom) == true) {
										if (broom.TypeOfTransport() == GameMod(race_type) || GameMod(race_type) == 3)
										{
											arr[i] = broom;
											++i;
											++count;
										}
										else
										{
											ErrorFun(2);
											tmp_i = i;
										}
									}
									else {
										NameDuplication(broom);
										tmp_i = i;
									}

									break;
								case 0:
									if (count >= 2)
									{
										end = 0;
									}
									else
									{
										ErrorFun(3);
									}
									break;
								}
							}

						} while (end != 0);
					}
					else
						if (reg_start == 2 && count >= 2)
						{
							start_game = true;
						}
		} while (start_game == false);

		quick_sort(arr, count);

		PrintList(arr, count);

		delete[] arr;

		std::cout << std::endl;
		int res = 0;
		do
		{
			std::cout << "1. �������� ��� ���� �����" << std::endl;
			std::cout << "2. �����" << std::endl;
			std::cout << "�������� ��������: ";
			std::cin >> res;
			if (res < 1 && res > 2)
			{
				ErrorFun(0);
			}
			else
				if (res == 1)
				{
					restart = true;
				}
				else
					if (res == 2)
					{
						restart = false;
					}
		} while (res != 1 && res != 2);
	
		system("cls");
	}

	return 0;
}