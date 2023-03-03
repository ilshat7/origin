#include <iostream>
#include <fstream>


int main()
{
    std::ifstream f("in.txt");
    std::ofstream f2("out.txt");

    if (f) {
        int col1;
        int col2;

        f >> col1;
        int* arr1 = new int[col1];
        int* arr1a = new int[col1];
        for (int i = 0; i < col1; i++) {
            f >> arr1[i];
        }

        f >> col2;
        int* arr2 = new int[col2];
        int* arr2a = new int[col2];
        for (int i = 0; i < col2; i++) {
            f >> arr2[i];
        }

        f2 << col2 << std::endl;
        for (int i = 0; i < col2; i++) {
            arr2a[i] = arr2[(col2 + (i - 1)) % col2];
            f2 << arr2a[i] << " ";
        }
        f2 << std::endl;
        f2 << col1 << std::endl;
        for (int i = 0; i < col1; i++) {
            arr1a[i] = arr1[(i + 1) % col1];
            f2 << arr1a[i] << " ";
        }
        delete[] arr1;
        delete[] arr1a;
        delete[] arr2;
        delete[] arr2a;
    }
    else {
        std::cout << "File is not open!" << std::endl;
    }
    f.close();
    f2.close();
}