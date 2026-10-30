#ifndef DOUBLY_LL_H
#define DOUBLY_LL_H

template <typename T>
class DoubleList {
    public:
    T data; // this contains the data to be stored in the node
    DoubleList<T>* prev = nullptr;
    DoubleList<T>* next = nullptr;
};

// creating a node
template <typename T>
DoubleList<T>* CreateNewNode (T newData) {
    // dynamically allocatge a new memory for the node
    DoubleList<T>* newNode = new DoubleList<T>;
    // store the data in the node
    newNode->data = newData;
    //point next and prev to null
    newNode->next = nullptr;
    newNode->prev = nullptr;
    // return the address of the newly created node
    return newNode; 
}

template <typename T>
void dllTraverse (DoubleList<T>* currentNode) {
    // temp variable to store the last node visited
    DoubleList<T>*tail;
    // check if the list is empty
    if (currentNode == nullptr) {
        std::cout << "The list is empty" << std::endl;
        return;
    }
    // move forward
    std::cout << "Forward: \n";
    while (currentNode != nullptr) {
        std::cout << currentNode->data << " ";
        tail = currentNode;
        currentNode = currentNode->next;
    }
    // add a next line
    std::cout << std::endl;
    // move backward
    std::cout << "Backward: \n";
    while (tail != nullptr) {
        std::cout << tail->data << " ";
        tail = tail->prev;
    }
} 

// inserting at the head of the list
template <typename T>
void dllInsertHead (T newData , DoubleList<T> ** currentHead) {
    // creating a new node
    DoubleList<T>* newNode = CreateNewNode(newData);
    // new node should point to the current head
    newNode->next = *currentHead;
    // current head should point back to the new node
    (*currentHead)->prev = newNode;
    // update the pointer head
    *currentHead = newNode;
}

// inserting at the end of the list
template <typename T>
void dllInsertEnd (T newData , DoubleList<T>* currentHead) {
    // create a new node
    DoubleList<T>* newNode = CreateNewNode(newData);
    // traverse until we reach the last node
    while (currentHead->next != nullptr) {
        currentHead = currentHead->next;
    }
    // connect the last node to the new node
    currentHead->next = newNode;
    // connect the new node back to last node
    newNode->prev = currentHead;
}

// general insert
template <typename T>
void dllGeneralInsert (T newData , DoubleList<T>* prevNode) {
    // check if it is the head node (previous node is null)
    if (prevNode == nullptr) {
        std::cout << "Previous value cannot be null" << std::endl;
        return;
    }
    // create a new node
    DoubleList<T>* newNode = new DoubleList<T>;
    // store data in the new node
    newNode->data = newData;
    newNode->next = prevNode->next;
    // point new node to the node currrent node was pointing to 
    newNode->prev = prevNode;
    newNode->next = prevNode->next;
    // point current node to the new node
    prevNode->next = newNode;
    if (newNode->next != nullptr) {
        newNode->next->prev = newNode;
    }
}

// delete a node
template <typename T> 
void dllDeleteNode (T findData , DoubleList<T>** head) {
    // if there is nothing to delete?
    if (*head == nullptr) return;
    DoubleList<T>* currentNode = *head;
    // searching the node the doesn't exist we found data
    while (currentNode != nullptr && currentNode->data != findData) {
        currentNode = currentNode->next;
    }
    // if data not found currNode == nullptr in the while loop
    if (currentNode == nullptr) {
        std::cout << "The data is not found \n" << std::endl;
        return;
    }
    // if data was found
    if (currentNode == *head) {
        *head = currentNode->next;
    } else{
        currentNode->prev->next = currentNode->next;
    }
    // updating he previous point
    if (currentNode->next != nullptr) {
        currentNode->next->prev = currentNode->prev;
    }

    delete currentNode;
}

#endif