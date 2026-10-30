#include <iostream>

void swapNumbers (int num1, int num2);

int main() {
    int num1 = 12;
    int num2 = 22;

    std::cout << "Before the swap: num1 is " << num1 << " , num2 is " << num2 << std::endl;

    swapNumbers(num1, num2);
    std::cout << "After the swap: num1 is " << num2 << " , num2 is " << num1 << std::endl; 
    return 0;
}

void swapNumbers (int num1, int num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}