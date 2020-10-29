/*
Given an integer N, create a chess board of NxN dimensions with N queens placed such that no queen can attack another.

Example 1-

Input: N = 4
There are two possible outcomes.

Output:

Order: 1
_ Q _ _ 
_ _ _ Q 
Q _ _ _ 
_ _ Q _ 


Order: 2
_ _ Q _ 
Q _ _ _ 
_ _ _ Q 
_ Q _ _ 


Solutions: 2


Example 2-

Input: N = 2
There is no possible solution.

Output:

Solutions: 0
*/

#include <iostream>
#include <cstdlib>

int *arr;
int c = 0;

bool isValidPosition(int r, int c){
	for(int i = 0; i < r; i++){
		if((arr[i] == c) || (abs(i-r) == abs(arr[i]-c))){
			return false;
		}
	}
	return true;
}

void displayBoard(int n){
	c++;
	char ch[n][n];
	int i, j;
	for(i = 0; i < n; i++){
		j = arr[i];
		ch[i][j] = 'Q';
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++)
			std::cout << (ch[i][j] == 'Q' ? "Q ": "_ ");
		std::cout << std::endl;
	}
	std::cout << "\n\n";
}

void allocateQueen(int x, int n){
	for(int i = 0; i < n; i++){
		if(isValidPosition(x, i)){
			arr[x] = i;
			if(x == n-1){
				std::cout << "Order: " << c+1 << std::endl;
				displayBoard(n);
			} else {
				allocateQueen(x+1, n);
			}
		}
	}
}

int main(){
	int n;
	std::cin >> n;
	arr = new int[n];
	allocateQueen(0, n);
	std::cout << "Solutions: " << c << std::endl;
	return 0;
}