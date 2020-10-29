#include<iostream>
using namespace std;
int factorial(int n); //factorial function declaration

int main()
{
    int n,sum=0;
    cout << "Enter a positive integer: ";
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        sum = sum+factorial(i);
    }
    cout<<"sum = "<<sum;
    return 0;
}
//factorial function definition
int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
