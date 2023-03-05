#include <iostream>
enum months {
    январь = 1,
    февраль,
    март,
    апрель,
    май,
    июнь,
    июль,
    август,
    сентябрь,
    октябрь,
    ноябрь,
    декабрь
};

int main()
{
    setlocale(LC_ALL, "Russian");
    int month_num = 1;

    while (month_num > 0)
    {
        std::cout << "Введите номер месяца: ";
        std::cin >> month_num;

        months month = static_cast<months>(month_num);

        if (month >= 0 && month <= 12) {

            switch (month)
            {
            case months::январь:
                std::cout << "Январь" << std::endl;
                break;
            case months::февраль:
                std::cout << "Февраль" << std::endl;
                break;
            case months::март:
                std::cout << "Март" << std::endl;
                break;
            case months::апрель:
                std::cout << "Апрель" << std::endl;
                break;
            case months::май:
                std::cout << "Май" << std::endl;
                break;
            case months::июнь:
                std::cout << "Июнь" << std::endl;
                break;
            case months::июль:
                std::cout << "Июль" << std::endl;
                break;
            case months::август:
                std::cout << "Август" << std::endl;
                break;
            case months::сентябрь:
                std::cout << "Сентябрь" << std::endl;
                break;
            case months::октябрь:
                std::cout << "Октябрь" << std::endl;
                break;
            case months::ноябрь:
                std::cout << "Ноябрь" << std::endl;
                break;
            case months::декабрь:
                std::cout << "Декабрь" << std::endl;
                break;
            }
        }
        else {
            std::cout << "Ошибка!";
            std::cout << std::endl;
        }


    }
}