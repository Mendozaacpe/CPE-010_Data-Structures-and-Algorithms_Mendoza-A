#include <iostream>
#include "doubly_ll.h"

int main() {
    // create a list 'C P E'
    DoubleList<char>* head = CreateNewNode('C');
    DoubleList<char>* second = CreateNewNode('P');
    DoubleList<char>* third = CreateNewNode('E');

    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    // traversal
    std::cout << "Testing the DLL Traversal" << std::endl;
    dllTraverse(head);

    // testing the insert at the head
    std::cout << "\nTesting of the insertion at the head node" << std::endl;
    dllInsertHead('X' , &head); 
    dllTraverse(head);

    // testing the insert at the end
    std:: cout << "\nTesting of the insertion at the end node" << std::endl;
    dllInsertEnd('0' , head);
    dllTraverse(head);

    // general insert
    std::cout << "\nTesting of General Insert" << std::endl;
    dllGeneralInsert ('Y' , head);
    dllTraverse(head);

    // delete a node
    std::cout << "\nTesting of deleting a node" << std::endl;
    dllDeleteNode ('X' , &head);
    dllTraverse(head);

    return 0;

}
