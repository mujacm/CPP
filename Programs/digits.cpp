/*
Problem: numbers.
*/

#include <iostream>
#include <math.h>
using namespace std;
int main() {
            int n;
            cout<<"Enter a quote: ";
            cin>>n;
            int t=n;
            int d=0;
            while(t!=0)
            {
                    t=t/10;
                    d++;
            }
            cout<<endl<<"Number of b is "<<d;
        return 0;
}


