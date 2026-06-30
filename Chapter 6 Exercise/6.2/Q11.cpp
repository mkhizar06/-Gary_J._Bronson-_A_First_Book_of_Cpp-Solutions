/* (Program). Write, test, and execute a function that accepts the values of a, b, and c as parameters from a 
calling function, and then calculates the values of s and [s(s - a)(s - b)(s - c)]. If this quantity is 
positive, the function calculates A. If the quantity is negative, a, b, and c do not form a triangle, 
and the function should set A = -1. The value of A should be returned by the function. Test 
the function by passing various data to it and verifying the returned value. */

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

double HeronFormula(double,double,double);
double Heronformula(double a,double b,double c)
{
	double s,s2;
	s=(a+b+c)/2;
	s2=s*(s-a)*(s-b)*(s-c);
	if(s2>=0)
	{
		return sqrt(s2);
	}
	else
	{
		cout<<"The sides do not form a valid triangle!";
		return -1;
	}
}

int main()
{
	double side1,side2,side3,Area;
	cout<<"\nEnter side 1 of triangle: ";
	cin>>side1;
	cout<<"\nEnter side 2 of triangle: ";
	cin>>side2;
	cout<<"\nEnter side 3 of triangle: ";
	cin>>side3;
	cout<<"\nArea of triangle = "<<HeronFormula(side1,side2,side3);
	
	
	return 0;
}