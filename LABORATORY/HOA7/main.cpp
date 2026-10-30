#include <iostream>
#include <cstdlib>
#include <time.h>
#include "searchingAlgo.h"

const int maxSize = 100;

void displayArr(int arr[]);

int main() {
    // create an array with unsorted list with h100 maximum size
    int unsortedArr[maxSize];
    // use time (0) as seed for random values
    srand(time(0));
    // populate the array with random values
    for (int i = 0; i < maxSize; i++) {
        unsortedArr[i] = rand()% 100;
    }
    // display the randomly generated array
    std::cout << "UnsortedArr: \n";
    displayArr(unsortedArr);

    std::cout << "\n Bubble sort: \n";
    bubbleSort(unsortedArr, maxSize);
    displayArr(unsortedArr); 

    std::cout << "\n Selection sort: \n";
    selectionSort(unsortedArr, maxSize);
    displayArr(unsortedArr); 

    std::cout << "\n Insertion sort: \n";
    insertionSort(unsortedArr, maxSize);
    displayArr(unsortedArr); 
}

void displayArr(int arr[]) {
    for (int i = 0; i < maxSize; i++) {
       std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
