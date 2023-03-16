#include "Counter.h"


Counter::Counter(int num)
{
	this->num = num;
}

Counter::Counter()
{
	this->num = 1;
}

void Counter::num_inc()
{
	num++;
}

void Counter::num_dec()
{
	num--;
}

int Counter::num_disp()
{
	return num;
}
