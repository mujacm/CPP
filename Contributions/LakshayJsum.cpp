/*
Problem: To print sum of first n numbers.
*/

#include <iostream>
using namespace std;
int main() {
        int n,s=0;
        cout<<"Enter a number: ";
        cin>>n;
        s = sumall(n);
        cout<<endl<<"Sum of 1 to "<<n<<" is = "<<s;
    return 0;
}
int sumall(int n)
{
  int S = 0;
  while(n > 0)
  {
    S += n;
    n--;
  }
  return S;
}
