/*
Given a string input of linear single variable 'x' equation, solve this equation and output the value of x.

Input: 5x=10
Output: x = 2

Input: 8x-13=2x+10
Output: x = 3.83333
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	string eq;
	cin >> eq;
	int sign = 1, cof = 0, cons = 0, index = 0;
	for(int i = 0; i < eq.length(); i++){
		if(eq.at(i) == '+' || eq.at(i) == '-'){
			if(i > index)
				cons = cons + sign*stoi(eq.substr(index, i));
			index = i;
		}
		else if(eq.at(i) == 'x'){
			if(index == i || eq.at(i-1) == '+')
				cof += sign;
			else if(eq.at(i-1) == '-')
				cof -= sign;
			else
				cof += sign*stoi(eq.substr(index, i));
			index = i+1;
		}
		else if(eq.at(i) == '='){
			if(i > index)
				cons += sign * stoi(eq.substr(index, i));
			sign =-1;
			index = i+1;
		}
	}
	if (index < eq.length())
		cons += sign*stoi(eq.substr(index));
	if(cof == 0)
		cout << "Check Equation!";
	else
		cout << "x = " << (-cons*1.0/cof) << endl;
	return 0;
}