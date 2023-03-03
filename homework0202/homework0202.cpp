#include <iostream>

struct Bank_account
{
    int number;
    std::string owner_name;
    double sum;
};

void change_sum (Bank_account* ba, double sum)
{
    ba->sum = sum;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    Bank_account ba;
    int new_sum;
    std::cout << "Введите номер счёта: ";
    std::cin >> ba.number;
    std::cout << "Введите имя владельца: ";
    std::cin >> ba.owner_name;
    std::cout << "Введите баланс: ";
    std::cin >> ba.sum;

    std::cout << "Введите новый баланс: ";
    std::cin >> new_sum;
    change_sum(&ba, new_sum);

    std::cout << ba.number << " " << ba.owner_name << " " << ba.sum;
}