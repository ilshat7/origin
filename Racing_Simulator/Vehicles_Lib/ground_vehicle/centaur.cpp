#include "centaur.h"

Centaur::Centaur(int distance)
{
	this->distance = distance; // - рассто¤ние
	this->name = "Кентавр"; // - название транспорта

	this->speed = 15; // - скорость транспорта
	this->pause_distance = 8; 

	this->pause_count = (distance / speed) / pause_distance; // - счетчик остановок
	this->pause_time = (pause_count * 2); //

	this->travel_time = (distance / speed) + pause_time; // - общее врем¤ движени¤

}