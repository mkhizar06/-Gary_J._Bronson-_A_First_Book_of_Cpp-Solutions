/* (Program) a. Write a C++ function named findAbs() that accepts a double-precision number passed to it,
computes its absolute value, and returns the absolute value to the calling function.A number’s absolute value
is the number itself if the number is positive and the negative of the number if the number is negative. */

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

float findAbs(float n)
{
	abs(n);
	return abs(n);
}

int main()
{
    float a;
	cout<<"\nEnter a number: ";
	cin>>a;
	cout<<"\nAbsoltue of "<<a<<" is "<<setprecision(2)<<findAbs(a);
}