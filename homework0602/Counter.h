#pragma once

class Counter
{
public:
	Counter();
	Counter(int num);
	void num_inc();
	void num_dec();
	int num_disp();
private:
	int num;
};