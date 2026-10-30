#include <iostream>
#include <cstdlib> // for generating random integers
#include <time.h> // will be used for our seeding function
#include "searchingAlgo.h"
#include "node.h"

const int max_size = 50;

int main() {
    
    int dataset[max_size];
    srand (time(0));
    for (int i = 0; i <max_size; i++) {
        dataset[i] = rand();
        std::cout << dataset[i] << " ";
    }
    std::cout << std::endl;
    
    std::cout << "What number to find: ";
    int choice;
    std::cin >> choice;
    
    linearSearchAR(max_size, choice, dataset);
    
    // CREATE A NODE FOR YOUR NAME 
    // [A]->[L]->[L]->[Y]->NULL
    
    // CREATE A NODE
    Node<char> *char1 = new_node('A');
    Node<char> *char2 = new_node('L');
    Node<char> *char3 = new_node('L');
    Node<char> *char4 = new_node('Y');
    
    // CONNECT THE NODEDS
    char1->next = char2;
    char2->next = char3;
    char3->next = char4;
    char4->next = nullptr;
    
    linearSearchLL(char1, 'Y');
    
    // generate a sorted array: (use for loop)
    int newArr[10] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};
    for (int i = 0; i < max_size; i++) {
        newArr[i] = i;
    }
    
    binarySearchArr (newArr, max_size, 100);
    
    binarySearchLL (char1, 'A');
    
    return 0;
}
