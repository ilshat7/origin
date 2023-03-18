#include <iostream>

int function(std::string str, int forbidden_length)
{
    if (forbidden_length != str.length())
    {
        return str.length();
    }
    else
    {
        throw std::exception("Вы ввели слово запретной длины! До свидания");
    }
}

int main()
{
    setlocale(0, "ru");

    std::cout << "Введите запретную длину: ";
    int forbidden_length;
    std::cin >> forbidden_length;

    while (true)
    {
        std::cout << "Введите слово: ";
        std::string str;
        std::cin >> str;
        try
        {
            std::cout << "Длина слова " << str << " равна " << function(str, forbidden_length) << std::endl;
        }
        catch (const std::exception& error_message)
        {
            std::cout << error_message.what() << std::endl;
            return 1;
        }
    }


}