#include <iostream>
#include <cstdlib>
#include <time.h>
#include "Supp.h"

const int maxSize = 15;

void displayArr(int arr[]);

int main() {
    int Arr[maxSize] = {4, 34, 29, 48, 53, 87, 12, 30, 44, 25, 93, 67, 43, 19, 74};
    
    std::cout << "Array: \n";
    displayArr(Arr);

    std::cout << "\n Merge Sort: \n";
    mergeSort(Arr, 0, maxSize - 1);
    displayArr(Arr); 

    std::cout << "\n Quick Sort: \n";
    quickSort(Arr, 0, maxSize - 1);
    displayArr(Arr); 
}

void displayArr (int arr[]) {
    for (int i = 0; i < maxSize; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
