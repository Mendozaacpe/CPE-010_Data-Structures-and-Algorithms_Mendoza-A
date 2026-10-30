#include <iostream>
#include <cstdlib>
#include <time.h>
#include "candidate.h"

const int maxSize = 100;

void displayArr(int arr[]);

int main() {
    int unsortedArr[maxSize];
    srand(time(0));
    for (int i = 0; i < maxSize; i++) {
        unsortedArr[i] = rand()% 5 + 1;
    }
    std::cout << "Unsorted Votes: \n";
    displayArr(unsortedArr);

    std::cout << "\n Bubble Sort: \n";
    bubbleSort(unsortedArr, maxSize);
    displayArr(unsortedArr);

    int candidate1 = 0, candidate2 = 0, candidate3 = 0, candidate4 = 0, candidate5 = 0;
    for (int i = 0; i < maxSize; i++) {
        switch (unsortedArr[i]) {
            case 1: candidate1++;
            break;

            case 2: candidate2++;
            break;

            case 3: candidate3++;
            break;

            case 4: candidate4++;
            break;
            
            case 5: candidate5++;
            break;
        }
    }
    std::cout << "\nThe vote counts: \n" << std::endl;
    std::cout << "Candidate 1: " << candidate1 << " votes" << std::endl;
    std::cout << "Candidate 2: " << candidate2 << " votes" << std::endl;
    std::cout << "Candidate 3: " << candidate3 << " votes" << std::endl;
    std::cout << "Candidate 4: " << candidate4 << " votes" << std::endl;
    std::cout << "Candidate 5: " << candidate5 << " votes" << std::endl;

    int candidateWin = 1, highestVotes = candidate1;
    if (candidate2 > highestVotes) {
        highestVotes = candidate2;
        candidateWin = 2;
    }
    if (candidate3 > highestVotes) {
        highestVotes = candidate3;
        candidateWin = 3;
    }
    if (candidate4 > highestVotes) {
        highestVotes = candidate4;
        candidateWin = 4;
    }
    if (candidate5 > highestVotes) {
        highestVotes = candidate5;
        candidateWin = 5;
    }
    std::cout << "\nThe winning candidate is: " << candidateWin << std::endl;
    std::cout << "The number of votes is " << highestVotes << std::endl;
    
    return 0;
}

void displayArr(int arr[]) {
    for (int i = 0; i < maxSize; i++) {
       std::cout << arr[i] << " ";
        if ((i + 1) % 20 == 0) {
            std::cout << std::endl;
        }
    }
}
