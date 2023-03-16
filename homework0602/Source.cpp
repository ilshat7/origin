#include <iostream>
#include "Counter.h"

int main()
{
	setlocale(LC_ALL, "ru");

	std::cout << "�� ������ ������� ��������� �������� ��������? ������� yes/no: ";
	std::string yes_or_no;
	std::cin >> yes_or_no;
	Counter count1;

	if (yes_or_no == "yes")
	{
		std::cout << "������� ��������� �������� ��������: ";
		int n;
		std::cin >> n;
		count1 = Counter(n);
	}


	bool loop = true;
	while (loop)
	{
		std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
		char command;
		std::cin >> command;
		switch (command)
		{
		case '+':
			count1.num_inc();
			break;
		case '-':
			count1.num_dec();
			break;
		case '=':
			std::cout << count1.num_disp() << std::endl;
			break;
		case 'x':
			std::cout << "�� ��������!\n";
			loop = false;
			break;
		default:
			break;
		}
	}


}