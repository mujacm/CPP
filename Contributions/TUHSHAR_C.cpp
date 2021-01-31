/*
Problem: To find number of digits of a number.
*/

#include <iostream>
#include <math.h>
using namespace std;
int main() {
            int n;
            cout<<"Enter a number: ";
            cin>>n;
            int d=floor(log10(n))+1;
             cout<<endl<<"Number of digits of "<<n<<" is "<<d;
        return 0;
}


