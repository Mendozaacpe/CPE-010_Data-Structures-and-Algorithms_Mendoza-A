#include <iostream>
#include "nodeSupp.h"
#include "supplementary.h"

int main() {
    int dataset[] = {15, 18, 2, 19, 18, 0, 8, 14, 19, 14};
    int size = 10;
    int key = 18;
    std::cout << "This is the array approach of the list\n";
    linearSearchAR(size, key, dataset); 

    Node<int>* node1 = new_node(15);
    Node<int>* node2 = new_node(18);
    Node<int>* node3 = new_node(2);
    Node<int>* node4 = new_node(19);
    Node<int>* node5 = new_node(18);
    Node<int>* node6 = new_node(0);
    Node<int>* node7 = new_node(8);
    Node<int>* node8 = new_node(14);
    Node<int>* node9 = new_node(19);
    Node<int>* node10 = new_node(14);
    
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7->next = node8;
    node8->next = node9;
    node9->next = node10;
    node10->next = nullptr; 

    std::cout << "This is the linked list approach of the list\n";
    linearSearchLL(node1, 18); 

    int instances = countInstances(10, 18, dataset);
    std::cout << "The number of instances of 18: " << instances << "\n";

    int sortedArray[10] = {3, 5, 6, 8, 11, 12, 14, 15, 17, 18};
    binarySearchArr(sortedArray, 10, 8);

    int result = recursiveBinarySearch(sortedArray, 0, 9, 8);
    if (result != -1) {
        std::cout << "The data was found!\n";
        std::cout << "Key 8 found at index " << result << "\n";
    }
    else {
        std::cout << "The data was not found!\n";
    } 

    return 0;
}
