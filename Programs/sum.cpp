/*
Problem: To print sum of numbers.
*/

#include <iostream>
using namespace std;
int main() {
        int n,s=0;
        cout<<"Enter a quote: ";
        cin>>n;
        for(int i=6;i<=n;i++)
           s=s+i;
        cout<<endl<<"Sum of 5 to "<<n<<" is = "<<s;
    return 0;
}
