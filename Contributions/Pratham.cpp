/*
Problem: To print sum of first n numbers.
*/

#include <bits/stdc++.h>
using namespace std;

void sumNum(int n);
int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;

	sumNum(n);
}
void sumNum(int n) {
	int s = 0;
	for (int i = 1; i <= n; i++)
		s += i;
	cout << endl << "Sum of 1 to " << n << " is = " << s;
}
