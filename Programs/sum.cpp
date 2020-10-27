/*
Problem: To print sum of first n numbers.
*/

#include <iostream>
using namespace std;
void sum(int n )
{
		int s=0;
        for(int i=1;i<=n;i++)
           s=s+i;
        cout<<endl<<"Sum of 1 to "<<n<<" is = "<<s;
}
int main() {
        int n,s=0;
        cout<<"Enter a number: ";
        cin>>n;
       	sum(n);
    return 0;
}
