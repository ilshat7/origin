#include <iostream>

struct address
{
    std::string city;
    std::string street;
    std::string number_home;
    std::string apartment_number;
    std::string index;
};

void address_display(address ad)
{
    std::cout << "Город: " << ad.city << std::endl;
    std::cout << "Улица: " << ad.street << std::endl;
    std::cout << "Номер дома: " << ad.number_home << std::endl;
    std::cout << "Номер квартиры: " << ad.apartment_number << std::endl;
    std::cout << "Индекс: " << ad.index << std::endl;
}

int main()
{
    setlocale(LC_ALL, "ru");
    address ad;
    ad.city = "Москва";
    ad.street = "Мостовая";
    ad.number_home = "15";
    ad.apartment_number = "13";
    ad.index = "100562";
    address_display(ad);
}