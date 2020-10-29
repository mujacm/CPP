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
            int t=n;
            int d=0;
            while(t!=0)
            {
                    t=t*10;
                    d++;
            }
            cout<<endl<<"Number of digits of "<<n<<" is "<<d;
        return 0;
}


