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
    months month = months::январь;

    while (month_num > 0)
    {
        std::cout << "Введите номер месяца: ";
        std::cin >> month_num;

        if (month_num >= 0 && month_num <= 12) {

            switch (month_num)
            {
            case 1:
                std::cout << "Январь" << std::endl;
                break;
            case 2:
                std::cout << "Февраль" << std::endl;
                break;
            case 3:
                std::cout << "Март" << std::endl;
                break;
            case 4:
                std::cout << "Апрель" << std::endl;
                break;
            case 5:
                std::cout << "Май" << std::endl;
                break;
            case 6:
                std::cout << "Июнь" << std::endl;
                break;
            case 7:
                std::cout << "Июль" << std::endl;
                break;
            case 8:
                std::cout << "Август" << std::endl;
                break;
            case 9:
                std::cout << "Сентябрь" << std::endl;
                break;
            case 10:
                std::cout << "Октябрь" << std::endl;
                break;
            case 11:
                std::cout << "Ноябрь" << std::endl;
                break;
            case 12:
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