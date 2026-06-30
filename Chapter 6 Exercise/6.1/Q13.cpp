/*  (Program) A useful function using no parameters can be constructed to return a value for π 
that’s accurate to the maximum number of decimal places your computer allows. This value is 
obtained by taking the arcsine of 1.0, which is π / 2, and multiplying the result by 2. In C++, 
the required expression is 2.0*asin(1.0); the asin() function is included in the standard
C++ mathematics library. (Remember to include cmath in your preprocessor directives.) Using 
this expression, write a C++ function named pi() that calculates and displays the value of π. 
(In the next section, you see how to return this value to the calling function.) */

#include<iostream>
#include<conio.h>
#include<cmath>

using namespace std;

double pi()
{
	double pie;
	pie=2.0*asin(1.0);

	return pie;
}

int main()
{
	cout<<"\nValue of Pi is "<<pi();
}