#include <iostream>
using namespace std;

int main() {
    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;
    int* array1 = new int[size];

    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < size; i++) {
        std::cin >> array1[i];
    }

    std::cout << "Массив 1: ";
    for (int i = 0; i < size; i++) {
        std::cout << array1[i] << " ";
    }
    std::cout << std::endl;

    int* array2 = new int[size + 1];

    for (int i = 0; i < size; i++) {
        array2[i] = array1[i];
    }

    array2[size] = 100;

    std::cout << "Массив 2: ";
    for (int i = 0; i < size + 1; i++) {
        std::cout << array2[i] << " ";
    }
    std::cout << std::endl;

    delete[] array1;
    delete[] array2;
}