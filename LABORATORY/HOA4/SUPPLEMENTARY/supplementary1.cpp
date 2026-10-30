#include <iostream>

#define maxCap 100

int stackArr[maxCap];
int top = -1 , newData;

void push(char symbol);
char pop();
bool isEmpty();
bool equal(char open , char close);
bool balance(std::string expression);

int main() {
    std::string expression;

    std::cout << "Enter an expression: " << std::endl;
    std::cin >> expression;

    if (balance(expression)) {
        std::cout << "The expression is balanced!" << std::endl;
    } else {
        std::cout << "The expression is not balanced!" << std::endl;
    }
    return 0;
}

void push(char symbol) {
    if (top < maxCap - 1) {
        top++;
        stackArr[top] = symbol;
    }
}

char pop() {
    if (isEmpty()) {
        return '0';   
    }
    return stackArr[top--];
}

bool isEmpty() {
    return top == -1;
}

bool equal(char open , char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

bool balance(std::string expression) {
    top = -1;

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
