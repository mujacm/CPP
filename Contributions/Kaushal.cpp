/*
Problem: To find number of digits of a number.
*/

#include <iostream>
#include <math.h>
using namespace std;
int main() {
            int n,x;
            cout<<"Enter a number: ";
            cin>>n;
            x= floor(log(n))+1;
            }
            cout<<endl<<"Number of digits of "<<n<<" is "<<x;
        return 0;
}


