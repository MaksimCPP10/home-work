#include <iostream>
#include <fstream>


int main()
{
    setlocale(0, "");
    int size1, size2;

    std::ifstream fin;
    fin.open("in.txt");

    std::cout << "Входной файл \"in.txt\":\n";
    fin >> size1;
    std::cout << size1 << "\n";
    int* first_array = new int[size1];
    for (int y = 0; y < size1; y++) {
        fin >> first_array[y];
        std::cout << first_array[y] << " ";
    }
    std::cout << "\n";

    fin >> size2;
    std::cout << size2 << "\n";
    int* second_array = new int[size2];
    for (int y = 0; y < size2; y++) {
        fin >> second_array[y];
        std::cout << second_array[y] << " ";
    }
    std::cout << "\n";

    std::ofstream fout("out.txt");

    std::cout << "\nВыходной файл \"out.txt\":\n";
    fout << size2 << "\n";
    std::cout << size2 << "\n";
    fout << second_array[size2-1]<<" ";
    std::cout << second_array[size2-1] << " ";
    for (int y = 0; y < size2 -1; y++) {
        fout << second_array[y]<<" ";
        std::cout << second_array[y] << " ";
    }
    fout << "\n";
    std::cout << "\n";

    fout << size1 << "\n";
    std::cout << size1 << "\n";
    for (int y = 1; y < size1; y++) {
        fout << first_array[y] << " ";
        std::cout << first_array[y] << " ";
    }
    fout << first_array[0];
    std::cout << first_array[0];
    
    fin.close();
    delete[] first_array;
    delete[] second_array;
}

