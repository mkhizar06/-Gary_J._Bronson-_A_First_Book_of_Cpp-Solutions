/*  (Program) Write a C++ program to calculate and display the maximum bending moment, M, 
of a beam that’s supported on both ends (see Figure 3.6). The formula is M = XW (L - X) / L, 
where X is the distance from the end of the beam that a weight, W, is placed, and L is the 
length of the beam.
The xxxx.xxxx denotes placing the calculated value in a field wide enough for four places to 
both the right and left of the decimal point.*/


#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	float M,X,L,W;
	cout<<"Enter weight of the object: ";
	cin>>W;
	cout<<"\nEnter the length of the beam: ";
	cin>>L;
	cout<<"\nEnter the distance of one end of beam: ";
	cin>>X;
	M = X * W * (L - X) / L;
	cout<<"\nMaximum Bending Moment = "<<fixed<<setprecision(4)<<M;
	
	return 0;
}