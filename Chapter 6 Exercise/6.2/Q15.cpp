/* (Program) a. A second-degree polynomial in x is given by the expression ax2 + bx + c, where a, 
b, and c are known numbers and a is not equal to 0. Write a C++ function named polyTwo
(a,b,c,x) that computes and returns the value of a second-degree polynomial for any passed 
values of a, b, c, and x. */

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

double polytwo(int,int,int,int);
double polytwo(int a,int b,int c,int x)
{
	return (a*(x*x))+(b*x)+c; 
}

int main()
{
	int a1,b1,c1,x1;
	cout<<"\nEnter a: ";
	cin>>a1;
	cout<<"\nEnter value of b: ";
	cin>>b1;
	cout<<"\nEnter value of c: ";
	cin>>c1;
	cout<<"\nEnter value of x: ";
	cin>>x1;
	cout<<"\nValue of Polynomial = "<<polytwo(a1,b1,c1,x1);
}