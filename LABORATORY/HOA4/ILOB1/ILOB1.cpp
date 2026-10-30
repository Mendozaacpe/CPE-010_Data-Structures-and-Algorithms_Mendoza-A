#include <iostream>
#include <stack>

// global declaration
#define maxCap 10

int stackArr[maxCap];
int top = -1 , newData;
// prototype functions
void push();
void pop();
void Top();
bool isEmpty();
bool isFull();
void displayStack();

int main() {
    // main driver
    int choice;
    while (true) {
        std::cout << "===========================" << std::endl;
        std::cout << "Stack Operations \n";
        std::cout << "1. PUSH\n";
        std::cout << "2. POP\n";
        std::cout << "3. TOP\n";
        std::cout << "4. isEMPTY\n";
        std::cout << "5. isFULL\n";
        std::cout << "6. DISPLAY STACKS\n";
        std::cout << "===========================" << std::endl;
        std::cin >> choice;

        switch (choice) {
            case 1: push();
            break;

            case 2: pop();
            break;

            case 3: Top();
            break;

            case 4: std::cout << "is stack empty? " << isEmpty() << std::endl;
            break;

            case 5: std::cout << "is the stack full? " << isFull() << std::endl;
            break;
            default: std::cout << "Invalid Choice!" << std::endl;
            break;

            case 6: displayStack();
            break;
        }
    }
}

// function definition
bool isEmpty() {
    // how to verify if the stack is empty?
    if (top == -1) return true;
    return false;
}

bool isFull() {
    // how to verify if the stack is full?
    if (top == maxCap - 1) return true;
    return false;
}

void push() {
    // error checking
    if (isFull()) {
        std::cout << "Stack Overflow" << std::endl;
        return; 
    }
    // pushing to the stack
    std::cout << "Enter a new value: " << std::endl;
    std::cin >> newData;
    // how do we insert the data into the stack?
    stackArr[++top] = newData;
}

void pop() {
    // error checking
    if (isEmpty) {
        std::cout << "Stack Overflow" << std::endl;
    }
    // display the value that we are going to pop
    std::cout << "Poppin: " << stackArr[top] << std::endl;
    // decrement the top value from the stack
    top--;
}

void Top() {
    // error catching
    if (isEmpty()) {
        std::cout << "Stack is Emnpty" << std::endl;
        return;
    }
    // check the top value
    std::cout << "Top element: " << stackArr[top] << std::endl;
}

// create a function for displayStack
void displayStack() {
    for (int i = 0; i >= 5; i--) {
        std::cout << "These are the stack elements: " << std::endl;
        std::cout << stackArr[top] << std::endl;
    }
}
