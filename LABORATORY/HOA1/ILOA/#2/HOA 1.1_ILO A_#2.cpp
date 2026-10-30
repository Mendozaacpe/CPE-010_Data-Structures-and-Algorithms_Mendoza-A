#include <iostream>

bool greaterThan (int a, int b);

int main() {
    int x = 7;
    int y = 12;

    if (greaterThan(x , y)){
        std::cout << "x is greater than y" << std::endl;
    } else {
        std::cout << "x is not greater than y" << std::endl;
    };
}

bool greaterThan (int a, int b) {
      return a > b;
}
