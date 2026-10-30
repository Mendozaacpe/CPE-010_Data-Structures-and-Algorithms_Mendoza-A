#include <iostream>

bool logicalOperations (bool c, bool d);

int main() {
    bool success = logicalOperations (bool(true), bool(false));

    int c = 0111;
    int d = 1100;
    
       if (success) {
        std::cout << "SUCCESS" << "\n";
       }
}

bool logicalOperations (bool c, bool d) {
    std::cout << std::boolalpha;

    std::cout << "Logical AND \n" << (c && d) << std::endl;
    std::cout << "Logical NAND \n" << !(c && d) << std::endl;
    std::cout << "Logical OR \n" << (c || d) << std::endl;
    std::cout << "Logical NOR \n" << !(c || d) << std::endl;
    std::cout << "Logical XNOR \n" << (c == d) << std::endl;
    std::cout << "Logical XOR \n" << (c ^ d) << std::endl;
    std::cout << "Logical NOT \n" << (!c) << std::endl;
    std::cout << "Logical NOT \n" << (!d) << std::endl;

    return true;
}
