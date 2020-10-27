/*
Problem: To find number of digits of a number.
*/

#include <iostream>
#include <math.h>
using namespace std;
void numberofdigits(int n)
{
     int d=0;
     int t=n;
    while(t!=0)
            {
                    t=t/10;
                    d++;
            }
            cout<<endl<<"Number of digits of "<<n<<" is "<<d;
}
int main() {
            int n;
            cout<<"Enter a number: ";
            cin>>n;
            numberofdigits(n);
        return 0;
}


