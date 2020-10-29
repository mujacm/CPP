/*
Problem: To print sum of first n numbers.
*/

#include <iostream>
using namespace std;
int main() {
        int n,s=0;
        cout<<"Enter a no: ";
        cin>>n;
        for(int i=1;i<=n;i++)
           s=s+i;
        cout<<endl<<"Sum of 1 to "<<n<<" is = "<<s;
    return 0;
}
