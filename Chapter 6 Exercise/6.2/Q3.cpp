/* (Program) a. Write a function named rightTriangle() that accepts the lengths of two sides 
of a right triangle as the arguments a and b. The subroutine should determine and return the 
hypotenuse, c, of the triangle. */

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

float rightTriangle(float n1,float n2)
{
	float c;
	c=sqrt(pow(n1,2)+pow(n2,2));
	return c;
}

int main()
{
    float a,b;
	cout<<"\nEnter the length of 1 side of triangle: ";
	cin>>a;
	cout<<"\nEnter length of 2nd side of triangle: ";
	cin>>b;
	cout<<"\nHypotenuse 'c' = "<<setprecision(2)<<rightTriangle(a,b);
}