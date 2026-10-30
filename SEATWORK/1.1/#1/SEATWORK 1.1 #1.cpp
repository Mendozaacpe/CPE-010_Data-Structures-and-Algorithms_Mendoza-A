#include <iostream>
using namespace std;

int main () {
    double quiz;
    double total;
    double average;
   
    for (int i = 1; i <= 3; i++) {
        cout << "Enter your score in Quiz " << i << ": ";
        cin >> quiz;
        total += quiz;
    } 
    
    cout << "The total of the 3 quizzes is: " << total << endl;
    
    average = total / 3;
    cout << "The average of the 3 quizzes is: " << average << endl;
    
    return 0;
}
