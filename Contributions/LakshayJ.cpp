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
            int u=n;
            int e=0;
            while(u!=0)
            {
                    u=u/10;
                    e++;
            }
            cout<<endl<<"Number of digits of "<<n<<" is "<<e;
        return 0;
}


