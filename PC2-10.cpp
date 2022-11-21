/*
PROGRAM: PC2-10.CPP
David Bowles
This program calculates MPG 
with user inputs for gallons of gasoline used
and miles driven.
Last modification: 8/20/2022
*/


#include <iostream>
using namespace std;

int main()
{
	float miles;
	cout << "How many miles driven?\n";
	cin >> miles;

	short int gasoline;
	cout << "How many gallons of gasoline used?\n";
	cin >> gasoline;

	//operation MPG = Miles driven/gallons of gasoline used

	cout << "You got " << miles / gasoline << " miles per gallon.";
	return 0;
}