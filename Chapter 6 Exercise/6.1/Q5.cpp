/* Write a function named sqrIt() that computes the square of the value passed 
to it and displays the result. The function should be capable of squaring numbers with decimal 
points. */

#include<iostream>
#include<iomanip>

using namespace std;

double sqr(double n)
{
	double square;
	square=n*n;
	
	return square;
}

int main()
{
	double a;
	cout<<"Enter the number: ";
	cin>>a;
	cout<<"\nSquare = "<<sqr(a);
	
	return 0;
}