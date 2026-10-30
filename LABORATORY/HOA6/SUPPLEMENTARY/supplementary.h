#include <iostream>
#include "nodeSupp.h"

#ifndef SUPPLEMENTARY_H
#define SUPPLEMENTARY_H

template <typename T>
void linearSearchAR (int size, T dataFind, int array[]) {
    int i = 0;
    int comparisons = 0;
    while (i < size) {
        comparisons++;
        if (dataFind == array[i]) {
            std::cout << "Searching is successful!\n";
            std::cout << "The data found was " << array[i] << "\n";
            std::cout << "The number of comparisons is " << comparisons << "\n";
            return;
        } 
        i++;
    }
    std::cout << "Searching is unsuccessful!\n";
} 

template <typename T> 
void linearSearchLL (Node<T> *nodes, T dataFind) {
    int comparisons = 0;
    while (nodes != nullptr) {
        comparisons++;
        if (nodes->data == dataFind) {
            std::cout << "Searching is successful!\n";
            std::cout << "The data found was " << nodes->data << "\n";
            std::cout << "The number of comparisons is " << comparisons << "\n";
            return;
        }
        nodes = nodes->next;
    }
    std::cout << "Searching is unsuccessful!\n";
} 

template <typename T>
int countInstances(int size, T key, T data[]) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        std::cout << "Let's check: " << data[i] << "\n";
        if (data[i] == key) {
            count++;
        }
    }
    return count;
} 

template <typename T>
void binarySearchArr (T data[], int arrSize, T dataFind) {
    int low = 0, high = arrSize - 1, middle, iteration = 0;
    while (low <= high) {
        middle = (low + high) / 2;
        iteration++;
        std::cout << "\nIteration " << iteration << "\n";
        std::cout << "The low index is: " << low << "\n";
        std::cout << "The high index is: " << high << "\n";
        std::cout << "The middle index is: " << middle << "\n";
        std::cout << "Let's check: " << data[middle] << "\n";
        if (dataFind == data[middle]) {
            std::cout << "The data was found!\n";
            std::cout << "Key " << dataFind << " was found at index " << middle << "\n";
            return;
        }
        else if (dataFind < data[middle]) {
            std::cout << dataFind << " < " << data[middle] << ", search on the left!\n";
            high = middle - 1;
        }
        else {
            std::cout << dataFind << " > " << data[middle] << ", search on the right!\n";
            low = middle + 1;
        }
    }
    std::cout << "The data was not found!\n";
} 

int recursiveBinarySearch (int arr[], int low, int high, int key) {
   if (low > high) {
    return -1;
   }
   int middle = low + (high - low) / 2;
   std::cout << "Let's check: " << arr[middle] << "\n";
   if (arr[middle] == key) {
    return middle;
   }
   else if (key < arr[middle]) {
    return recursiveBinarySearch(arr, low, middle -1, key);
   }
   else {
    return recursiveBinarySearch(arr, middle +1, high, key);
   }
} 

#endif
