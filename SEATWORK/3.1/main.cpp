#include <iostream>
#include "singly_ll.h"

int main() {

    // creation of node "ALLY"

    // creating a node started in the stack
    SingleList<char>* head = nullptr;
    SingleList<char>* second = nullptr;
    SingleList<char>* third = nullptr;
    SingleList<char>* fourth = nullptr;

    // allocates memory in the head
    head = new SingleList<char>;
    second = new SingleList<char>;
    third = new SingleList<char>;
    fourth = new SingleList<char>;

    // storing a value inside the node
    head->data = 'A';
    second->data = 'L';
    third->data = 'L';
    fourth->data = 'Y';

    // linking the node
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = nullptr; 

    std::cout << "Testing of Traversal: \n";
    ListTraversal(head);

    std::cout << "Testing of sllinsertHead: \n";
    sllinsertHead('Y' , &head);
    ListTraversal(head);

    std::cout << "Testing of sllGeneralInsert: \n";
    sllGeneralInsert ('X' , head->next->next);
    ListTraversal(head);

    std::cout << "Testing of sllinsertEnd: \n";
    sllinsertEnd ('U' , &head);
    ListTraversal(head);

    std::cout << "Testing of deleteing the node: \n";
    sllDeleteNode ('U' , &head);
    ListTraversal(head);
    sllDeleteNode ('Y' , &head);
    ListTraversal(head);
    sllDeleteNode ('X' , &head);
    ListTraversal(head);

    std::cout << "Deleting all node: \n";
    sllDeleteList(&head);
    ListTraversal(head);

    return 0;
}
