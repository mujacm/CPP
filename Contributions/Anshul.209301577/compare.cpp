#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "The greater number among " << a << " and " << b << " is: ";
    cout << (a>b? a : b) << endl;

}
