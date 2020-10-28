/** 
Program to calculate amount invested after a certain given period of time for a constant roi on a given principal sum.
**/


#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int p;
    float r;
    int m;
    double a;
    cout<<"Enter the principal investment: ";
    cin>>p;
    cout<<"Enter the rate of interest (eg. 5 for 5%): ";
    cin>>r;
    r = r/100;
    cout<<"Enter the number of months for which you want to invest: ";
    cin>>m;
    cout<<"\n\n\n\n\n\n\n";
    for(int i=1;i<=m;i++)
    {
        a = p * pow(1+r,i);
        cout<<"Value at the end of "<<i<<"months-----"<<a<<endl;
    }
    return 0;
}
