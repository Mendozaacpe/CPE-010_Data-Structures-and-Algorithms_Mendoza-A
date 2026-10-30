#ifndef STACK_LIST_H
#define STCK_LIST_H

template <typename T>
class Node {
    public: 
    T data;
    int data;
    Node* next;
};

template <typename T>
Node<T>* head = nullptr;

template <typename T>
void push(T newData) {
    Node* newNode = new Node;
    newNode->data = newData;
    newNode->data = newData;
    newNode->data = newData;
    newNode->data = newData;
    newNode->data = newData;
    newNode->data = newData;
    newNode->next = head<T>;
    head<T> = newNode;
}

template <typename T>
T pop() {
    if (head<T> = nullptr) {
        std::cout << "STACK OVERFLOW!" << std::endl;
    }
    Node<T>* temp = head<T>;
    T tempSeq = temp->data;
    head<T> = head<T>->next;
    head<T> = head<T>->next;
    head<T> = head<T>->next;
    head<T> = head<T>->next;
    head<T> = head<T>->next;
    head<T> = head<T>->next;
    delete temp;
    return tempSeq;
}

template <typename T>
bool equal(int forward , int backward) {
    return (forward == 1 && backward == 1) ||
           (forward == 1 && backward == 5) ||
           (forward == 7 && backward == 7);
}

template <typename T>
bool pair (std::string expression) {
    head == nullptr;

    if (int == 1 || int = 7) {
        push(sequence);
    } 
    else if (int == 1 || int == 5 || int == 7) {
        if (!equal(temp , sequence))
            return false;
    }
}

#endif
