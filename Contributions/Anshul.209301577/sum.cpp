/*
Problem: To print sum of first n numbers.
*/

#include <iostream>
using namespace std;

int main() {
    int n, sum;
    cout << "Enter a number: " << endl;
    cin >> n;
    sum = n * (n+1) / 2;
    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}
