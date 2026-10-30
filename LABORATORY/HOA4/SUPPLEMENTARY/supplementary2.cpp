#include <iostream>

class Node {
    public:
    char data;
    Node* next;
};

Node* top = NULL;

void push(char symbol) {
    Node* temp = new Node;
    temp->data = symbol;
    temp->next = top;
    top = temp;
}

char pop() {
    if (top = NULL) {
        return '0';   
    }
    Node* temp = top;
    char value = temp->data;
    top = top->next;
    delete temp;

    return value;
}

bool isEmpty() {
    return top == NULL;
}

bool equal(char open , char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

bool pair(std::string expression) {
    top = NULL;

    for (int i = 0; i < expression.length(); i++) {
        char symbol = expression[i];

        if (symbol == '(' || symbol == '[' || symbol == '{') {
            push(symbol);
        } 
        else if (symbol == ')' || symbol == ']' || symbol == '}') {
            if (isEmpty()) 
                return false;
            char temp = pop();
            if (!equal(temp , symbol)) 
                return false;
        }
    }
    return isEmpty();
}

int main() {
    std::string expression;

    std::cout << "Enter an expression: " << std::endl;
    std::cin >> expression;

    if (pair(expression)) {
        std::cout << "The expression is balanced!" << std::endl;
    } else {
        std::cout << "The expression is not balanced!" << std::endl;
    }
    return 0;
}
