#include <cstddef>
#include <iostream>
#ifndef SUPP_H
#define SUPP_H

template <typename T>
void Merge (T arr[], int left, int middle, int right) {
    int i = left;
    int j = middle + 1;
    int k = 0;
    T temp[100];

    while (i <= middle && j <= right) {
        if (arr[i] < arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    while (i <= middle) {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= right) {
        temp[k] = arr[j];
        j++;
        k++;
    }
    for (i = left, k = 0; i <= right; i++, k++) {
        arr[i] = temp[k];
    }
}

template <typename T>
void mergeSort (T arr[], int left, int right) {
    if (left < right) {
        int middle = (left + right) / 2;
        mergeSort (arr, left, middle);
        mergeSort (arr, middle + 1, right);
        Merge (arr, left, middle, right);
    }
}

template <typename T>
int partition (T arr[], int low, int high) {
    T pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap (arr[i], arr[j]);
        }
    }
    std::swap (arr[i + 1], arr[high]);
    return i + 1;
}

template <typename T>
void quickSort (T arr[], int low, int high) {
    if (low < high) {
        int pivot = partition (arr, low, high);
        quickSort (arr, low, pivot - 1);
        quickSort (arr, pivot + 1, high);
    }
}

#endif
