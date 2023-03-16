#include <iostream>
#include <fstream>
class Address
{
public:
    Address() //по условию не должно быть стандартного конструктора, однако без него не создается динамический массив!
    {
        this->city = "";
        this->street = "";
        this->building = "";
        this->apartment = "";
    }

    Address(std::string city, std::string street, std::string building, std::string apartment);

    void set_address(std::string city, std::string street, std::string building, std::string apartment) {
        this->city = city;
        this->street = street;
        this->building = building;
        this->apartment = apartment;
    }
    std::string get_output_address();
    std::string get_city();//это нужно что бы сортировка сработала

    
private:
    std::string city;
    std::string street;
    std::string building;
    std::string apartment;
};
Address::Address(std::string city, std::string street, std::string building, std::string apartment)
{
    this->city = city;
    this->street = street;
    this->building = building;
    this->apartment = apartment;
}

std::string Address::get_output_address()
{
    return city + ", " + street + ", " + building + ", " + apartment;
}

std::string Address::get_city()
{
    return city;
}

void sort(Address* addresses, int size)
{
    bool swapped;
    do
    {
        swapped = false;
        for (int i = 1; i < size; i++)
        {
            if (addresses[i - 1].get_city() > addresses[i].get_city())
            {
                Address temp = addresses[i - 1];
                addresses[i - 1] = addresses[i];
                addresses[i] = temp;
                swapped = true;
            }
        }
    } while (swapped);
};


int main()
{
    std::ifstream f("in.txt");

    if (f)
    {
        int col;
        f >> col;
        std::string city = "";
        std::string street = "";
        std::string building = "";
        std::string apartment = "";

        Address* adr = new Address[col];

        for (int i = 0; i < col; i++)
        {
            f >> city;
            f >> street;
            f >> building;
            f >> apartment;
            adr[i].set_address(city, street, building, apartment);
        }


        sort(adr, col);


        std::ofstream f1("out.txt");
        f1 << col << std::endl;
        for (int i = 0; i < col; i++)
        {
            f1 << adr[i].get_output_address() << std::endl;
        }
        delete[] adr;
        f.close();
        f1.close();
    }
    else
    {
        std::cout << "Не удалось прочитать файл in.txt\n";
    }
}


