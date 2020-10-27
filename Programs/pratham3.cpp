/*
Problem: To find number of digits of a number.
*/

#include <bits/stdc++.h>
using namespace std;

int countDigit(long long n)
{
    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}

// Driver code
int main(void)
{
    long long n;
    cin >> n;
    cout << "Number of digits : "
         << countDigit(n);
    return 0;
}