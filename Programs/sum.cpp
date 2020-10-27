/*
Problem: To print sum of first n numbers.
*/

#include <iostream>
using namespace std;
int main() {
    
    int n;
    int sum = 0;

    cout<<"Enter a number :: ";
    cin>>n;

    for(int i=1; i<=n; i++){
    	sum+=i;
    }
    cout<<"Sum of n numbers :: "<< sum<<endl;



    return 0;
}
