#include <iostream>
#include <algorithm>
using namespace std;

int memo[101];

int getMinSteps ( int n ) {
    if ( n == 1 ) return 0; // base case
    if( memo[n] != -1 ) return memo[n]; // we have solved it already :)
    
    int r = 1 + getMinSteps( n - 1 ); // '-1' step . 'r' will contain the optimal answer finally
    
    if( n % 2 == 0 ) r = min( r , 1 + getMinSteps( n / 2 ) ) ; // '/2' step
    if( n % 3 == 0 ) r = min( r , 1 + getMinSteps( n / 3 ) ) ; // '/3' step
    
    memo[n] = r ; // save the result. If you forget this step, then its same as plain recursion.
    return r;
}

int main() {
    int n;

    cout << "Enter a positive integer (1 - 1000): ";
    cin >> n;

    if (n < 1 || n > 1000) {
        cout << "Invalid input!";
        return 0;
    }

    fill(memo, memo + 1000, -1);

    cout << "Minimum steps to reach 1: " << getMinSteps(n) << endl;

    return 0;
}
