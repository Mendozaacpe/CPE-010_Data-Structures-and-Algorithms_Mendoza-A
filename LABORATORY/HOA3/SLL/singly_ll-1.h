#ifndef SINGLY_LL_H
#define SINGLY_LL_H

template <typename T>
class SingleList {
    public:
    T data; // this contains the data to be stored in the node
    SingleList<T>* next = nullptr;
};

template <typename T>
void ListTraversal (SingleList<T>* head) {
    if (head == nullptr) {
        std::cout << "The list is empty";
        return;
    }

    while (head != nullptr) {
        // prints the data of n
        std::cout << head->data;

        if (head->next != nullptr) {
            std::cout << " -> ";
        }

        head = head->next;
    } 
    std::cout << std::endl;
}

template <typename T>
void sllinsertHead (T newData , SingleList<T>** currentHead) {
    // alllocate memory for the new node
    SingleList<T>* newNode = new SingleList<T>;
    // put our data into the new node
    newNode->data = newData;
    // set next of the new node to point to the previous head
    newNode->next = *currentHead;
    // reset the head to the new node
    *currentHead = newNode;
}

template <typename T>
void sllGeneralInsert (T newData , SingleList<T>* preNode) {
    // check if it is the head node (previous node is null)
    if (preNode == nullptr) {
        std::cout << "Previous value cannot be null" << std::endl;
        return;
    }
    //alllocate a new node
    SingleList<T>* newNode = new SingleList<T>;
    // store data in the new node
    newNode->data = newData;
    // point new node to the node previous node was pointing to 
    newNode->next = preNode->next;
    // point previous node to the new node
    preNode->next = newNode;
}

template <typename T>
void sllinsertEnd (T newData , SingleList<T>** head) {
    // alllocate a new node
    SingleList<T>* newNode = new SingleList<T>;
    // dereference to the head node
    SingleList<T>* currentNode = *head;
    // store date in new node
    newNode->data = newData; 
    // point to null
    newNode->next = nullptr;

    while (currentNode->next != nullptr) {
        currentNode = currentNode->next;
    }
    // point the next of the current node to the new node
    currentNode->next = newNode;
}

template <typename T> 
void sllDeleteNode (T findData , SingleList<T>** head) {
    // if there is nothing to delete?
    if (*head == nullptr) return;
    SingleList<T>* currNode = *head;
    SingleList<T>* prevNode = nullptr;
    // searching the node the doesn't exist we found data
    while (currNode != nullptr && currNode->data != findData) {
        prevNode = currNode;
        currNode = currNode->next;
    }
    // if data not found currNode == nullptr in the whiel loop
    if (currNode == nullptr) {
        std::cout << "The data is not found \n" << std::endl;
        return;
    }
    // if data was found
    if (prevNode == nullptr) {
        *head = currNode->next;
    } else{
        prevNode->next = currNode->next;
    }

    delete currNode;
}

template <typename T>
void sllDeleteList (SingleList<T> **head) {
    SingleList<T>* current = *head;

    while (current != nullptr) {
        SingleList<T>* temp = current;
        current = current->next;
        delete temp;
    }

    *head = nullptr;
} 

#endif
