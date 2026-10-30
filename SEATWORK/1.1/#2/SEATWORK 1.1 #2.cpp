#include <iostream>
#include <string>
using namespace std;

int main () {
    string item1 , item2 , item3;
    double price1 , price2 , price3;
    double total;
    double payment;
    double change;
    
    cout << "Item 1: ";
    cin >> item1;
    cout << "Price: ";
    cin >> price1;
    
    cout << "Item 2: ";
    cin >> item2;
    cout << "Price: ";
    cin >> price2;
    
    cout << "Item 3: ";
    cin >> item3;
    cout << "Price: ";
    cin >> price3;
    
    total = price1 + price2 + price3;
    cout << "The total is: " << total << endl;
    
    cout << "The cash payment is: ";
    cin >> payment;
    
    change = payment - total;
    
    cout << "\n=====RECEIPT=====\n" << endl;
    cout << item1 << " - " << price1 << " pesos\n" << endl;
    cout << item2 << " - " << price2 << " pesos\n" << endl;
    cout << item3 << " - " << price3 << " pesos\n" << endl;
    cout << "---------------------------------" << endl;
    cout << "Total : " << total << " pesos\n" << endl;
    cout << "Payment : " << payment << " pesos\n" << endl; 
    cout << "Change : " << change << " pesos\n" << endl;
    
    return 0;
}