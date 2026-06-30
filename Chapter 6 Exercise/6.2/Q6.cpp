/*  (Program) a. The surface area, S, of a cylinder is given by the formula
 S = 2πrl
where r is the cylinder’s radius, and l is the length of the cylinder.Using this formula,
write a C++ function named surfarea() that accepts a cylinder’s radius and length and returns
its surface area. */

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

float surfarea(float l,float r)
{
	const float pi=3.1415;
	float S;
	S=2*pi*r*l;
	return S;
}

int main()
{
    float length,radius;
	cout<<"\nEnter the length of cylinder: ";
	cin>>length;
	cout<<"\nEnter the radius of cylinder: ";
	cin>>radius;
	cout<<"\nSurface Area = "<<fixed<<setprecision(2)<<surfarea(length,radius);
}