/*  (Program) a. The volume, V, of a sphere is given by this formula: 
Volume = 4πr3/3 where r is the sphere’s 
radius
 Using this formula, write, compile, and run a C++ function named spherevol() that accepts 
a sphere’s radius and then calculates and displays its volume.
b. Include the function written in Exercise 10a in a working program. Make sure your function 
is called from main(). Test the function by passing various data to it. */

#include<iostream>
#include<iomanip>

using namespace std;

double spherevol(double r)
{
	const float pi = 3.141;
	double volume;
	volume = (4*pi*(r*r*r))/3;
	
	return volume;
}

int main()
{
	double a;
	cout<<"Enter radius of sphere: ";
	cin>>a;
	cout<<"\nVolume of sphere = "<<spherevol(a);
	
	return 0;
}