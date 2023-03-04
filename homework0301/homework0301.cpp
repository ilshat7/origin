#include <iostream>
class Calculator
{
public:
    double num1;
    double num2;
    double add();
    double multiply();
    double subtract_1_2();
    double subtract_2_1();
    double divide_1_2();
    double divide_2_1();
    bool set_num1(double num1);
    bool set_num2(double num2);
};
double Calculator::add()
{
    return num1 + num2;
}
double Calculator::multiply()
{
    return num1 * num2;
}
double Calculator::subtract_1_2()
{
    return num1 - num2;
}
double Calculator::subtract_2_1()
{
    return num2 - num1;
}
double Calculator::divide_1_2()
{
    return num1 / num2;
}
double Calculator::divide_2_1()
{
    return num2 / num1;
}

bool Calculator::set_num1(double num1)
{
    if (num1 != 0) {
        this->num1 = num1;
        return true;
    }
    
    return false;
}

bool Calculator::set_num2(double num2)
{
    if (num2 != 0) {
        this->num2 = num2;
        return true;
    }

    return false;
}

int main()
{
    setlocale(LC_ALL, "ru");

    while (true)
    {
        std::cout << "Введите num1: ";
        double num1;
        std::cin >> num1;

        std::cout << "Введите num2: ";
        double num2;
        std::cin >> num2;

        Calculator calc{ num1,num2 };

        if (calc.set_num1(num1) && calc.set_num2(num2))
        {
            std::cout << "num1 + num2 = " << calc.add() << std::endl;
            std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
            std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
            std::cout << "num2 - num1 = " << calc.subtract_2_1() << std::endl;
            std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
            std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;
        }
        else
        {
            std::cout << "Неверный ввод!" << std::endl;
        }


    }

}
