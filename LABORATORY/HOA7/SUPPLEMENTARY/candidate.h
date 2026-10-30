#include <cstddef>
#include <iostream>
#ifndef CANDIDATE_H
#define CANDIDATE_H

template<typename T>
void bubbleSort(T arr[], size_t arrSize) {
    for (int i = 0; i < arrSize; i++) {
         for (int j = i + 1; j < arrSize; j++) {
            // step 3: swap if the arr[j] > arr[i]
            if (arr[i] > arr[j]) {
                std::swap(arr[i], arr[j]);
            }
         }
    }     
}

template <typename T>
// array, current position, size of array
int routineSmallest(T arr[], int K, const int arrSize) {
    int position = K;
    T smallestElem = arr[K];

    for (int j = K + 1; j < arrSize; j++) {
        if (arr[j] < smallestElem) {
            smallestElem = arr[j];
            position = j;
        }
    }
    return position;
}

#endif
