/* (Program) a. The volume, V, of a cylinder is given by the formula
 V = π r2 L
 where r is the cylinder’s radius and L is its length. Using this formula, write a C++ function 
named cylvol() that accepts a cylinder’s radius and length and returns its volume. */

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

float cylvol(float l,float r)
{
	const float pi=3.1415;
	float v;
	v=pi*(r*r)*l;
	return v;
}

int main()
{
    float length,radius;
	cout<<"\nEnter the length of cylinder: ";
	cin>>length;
	cout<<"\nEnter the radius of cylinder: ";
	cin>>radius;
	cout<<"\nVolume of cylinder = "<<setprecision(2)<<cylvol(length,radius);
}