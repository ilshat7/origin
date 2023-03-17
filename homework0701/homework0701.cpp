#include <iostream>
#define MODE 1

int add(int num1, int num2) {
    return num1 + num2;
}

int main()
{
    setlocale(0, "ru");

#if MODE == 0
    std::cout << "Работаю в режиме тренировки\n";
#elif MODE == 1
    std::cout << "Работаю в боевом режиме\n";

    std::cout << "Введите число 1: ";
    int num1;
    std::cin >> num1;
    std::cout << "Введите число 2: ";
    int num2;
    std::cin >> num2;
    std::cout << "Результат сложения: " << add(num1, num2);

#else
#error Неизвестный режим. Завершение работы
#endif // MODE == 0




}