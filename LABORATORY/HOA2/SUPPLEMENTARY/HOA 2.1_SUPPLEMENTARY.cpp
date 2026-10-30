#include <iostream>
#include <string>

class Grocery {
    private:
    std::string category;
    std::string name;
    int quantity;
    double price;
    public:
    // constructor
        Grocery (std::string name = " " , std::string category = " " , int quantity = 0 , double price = 0) {
            this->name = name;
            this->category = category;
            this->quantity = quantity;
            this->price = price;
    };

    // deconstructor
    ~Grocery() {}

    // copy constructor
    Grocery (const Grocery &copyGrocery) {
        name = copyGrocery.name;
        category = copyGrocery.category;
        quantity = copyGrocery.quantity;
        price = copyGrocery.price;
    }

    // copy assignment operator
    Grocery& operator=(const Grocery &copyGrocery) {
        if (this != &copyGrocery) {
            name = copyGrocery.name;
            category = copyGrocery.category;
            quantity = copyGrocery.quantity;
            price = copyGrocery.price;
        }
        return *this;
    }

    // calculate sum
    double calculateSum() {
        return quantity * price;
    }

    // display attributes
    void printDetails() {
        std::cout << category << ": " << name;
        std::cout << " | Quantity: " << quantity;
        std::cout << " | Price: " << price;
        std::cout << " | The total is: " << calculateSum() << " pesos" << std::endl;
    }
};

double totalSum (Grocery* groceries[] , int grocerycount) {     
    double total = 0;
    
    for (int i = 0; i < grocerycount; i++) {
        if (groceries[i] != nullptr)
            total += groceries[i]->calculateSum();
    }

    return total;
}

int main() {
    Grocery* apple = new Grocery ("Fruit" , "Apple" , 7 , 10);
    Grocery* banana = new Grocery ("Fruit" , "Banana" , 8 , 10);
    Grocery* broccoli = new Grocery ("Vegetable" , "Broccoli" , 12 , 60);
    Grocery* lettuce = new Grocery ("Vegetable" , "Lettuce" , 10 , 50);

    Grocery* groceries[4] = {apple , banana , broccoli , lettuce};
    
    std::cout << "----- Jenna's Grocery List -----" << std::endl;

    std::cout << std::endl;

    for (int i = 0; i < 4; i++) {
        groceries[i]->printDetails();
    }
    std::cout << "\nThe overall total is: " << totalSum(groceries , 4) << " pesos" << std::endl;
    
    delete groceries[3];
    groceries[3] = nullptr;
    std::cout << "\nLettuce is removed!" << std::endl;
    std::cout << "\nThe new total is: " << totalSum(groceries , 4) << " pesos" << std::endl;

    delete groceries[0];
    delete groceries[1];
    delete groceries[2];
    return 0;
}
