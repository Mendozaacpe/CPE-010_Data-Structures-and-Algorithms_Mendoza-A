#ifndef STACK_LIST_H
#define STACK_LIST_H

// class node that contains data and the next
template <typename T>
class Node {
    public:
    T data; // value that we need store
    Node* next; // pointer to the next node
};

// global pointer for the top of the stack
template <typename T>
Node<T> *head = nullptr;

// operations for the stack

// push
template <typename T>
void push(T newData) {
    // crete a new node and assign the newData
    Node<T>* newNode = new Node<T>;
    newNode->data = newData;
    // new noded points to current top, then becomes the new top
    newNode->next = head<T>;
    head<T> = newNode;
}

// pop
template <typename T>
T pop() {
    // check if the stack is empty:
    if (head<T> == nullptr) {
        std::cout << "Stack Overflow." << std::endl;
    }
    // save the current top node
    Node<T>* temp = head<T>;
    // store its data
    T tempVal = temp->data;
    // move the head to the next node
    head<T> = head<T>->next;
    // free the removed data
    delete temp;
    // return the removed data
    return tempVal;
}

// isEmpty
template <typename T>
bool isEmpty() {
    return head<T> == nullptr;
}

// top
template <typename T>
void Top() {
    // error catching:
    if (isEmpty<T>()) {
        std::cout << "Satck Overflow." << std::endl;
        return;
    }
    // display the top node
    std::cout << "Top of stack: " << head<T>->data << std::endl;
}

// display All
template <typename T>
void displayALL() {
    if (head<T> == nullptr) {
        std::cout << "Stack Overflow\n";
        return;
    }
    std::cout << "Displaying the StacK: \n";
    Node<T>* temp = head<T>;
    while (temp != nullptr) {
        std::cout << temp->data << "\n";
        temp = temp->next;
    }
    std::cout << "\n";
}

#endif
