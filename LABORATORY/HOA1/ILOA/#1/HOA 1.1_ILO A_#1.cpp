#include <iostream>

int sumOfTwoNum (int fNum, int sNum);

int main() {
    std::cout << "The sum of the two numbers is: " 
    << sumOfTwoNum (12,22) << std::endl;
}

int sumOfTwoNum (int fNum, int sNum) {
      int sum = fNum + sNum;
      return sum;
}
