#include <iostream>
using namespace std;

int main(){
int x; 
int factorial,y; 

cout << "Enter a positive integer here >> ";
cin >> x;

	for (y = 0; y <= x; y++)
	
		if (y == 0)
		factorial = 1;
		else
		factorial = factorial * y;
	
	cout << "The factorial of the number " << x << " is " << factorial << endl;
return 0;
}

