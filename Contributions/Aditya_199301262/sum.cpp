/*
Problem: To print sum of first n numbers.
*/

#include <iostream>
using namespace std;
int main() {
        int n;
        cout<<"Enter a number: ";
        cin>>n;
        cout<<endl<<"Sum of 1 to "<<n<<" is = "<<(n*(n+1))/2;
    return 0;
}
