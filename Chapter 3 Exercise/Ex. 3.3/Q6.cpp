 /*  (Program) The circumference of an ellipse (review Figure 3.4) is given by this formula:
Circumference = pi*sqrt(a+b)2
Using this formula, write a C++ program to calculate the circumference of an ellipse with a 
minor radius, a, of 2.5 inches and a major radius, b, of 6.4 inches.*/


#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	const float pi=3.141;
	float a,b,c;
	a = 2.5;
	b = 6.4;
	c = pi*(sqrt((a+b)*(a+b)));
	cout<<"\nCircumference = "<<fixed<<setprecision(2)<<c<<"\n";
}