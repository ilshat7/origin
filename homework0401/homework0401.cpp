#include <iostream>
#include <fstream>
class Address
{
public:
    std::string city;
    std::string street;
    std::string building;
    std::string apartment;
};
int main()
{
    std::ifstream f("in.txt");

    if (f)
    {
        int col;
        f >> col;
        Address* adr = new Address[col];

        for (int i = 0; i < col; i++)
        {
            f >> adr[i].city;
            f >> adr[i].street;
            f >> adr[i].building;
            f >> adr[i].apartment;
        }
        std::ofstream f1("out.txt");
        f1 << col << std::endl;
        for (int i = col - 1; i >= 0; i--)
        {
            f1 << adr[i].city << ", " << adr[i].street << ", " << adr[i].building << ", " << adr[i].apartment << std::endl;
        }
        delete[] adr;
        f1.close();
    }
    else
    {
        std::cout << "Не удалось прочитать файл in.txt\n";
    }
    f.close();
}