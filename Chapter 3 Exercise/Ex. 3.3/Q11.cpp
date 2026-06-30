/*  (Program) The roads of Kansas are laid out in a rectangular grid at exactly one-mile intervals.
 Farmer Pete drives his 1939 Ford pickup x miles east and y miles 
north to get to farmer Joe’s farm. Both x and y are integer numbers. Using this information, 
write, test, and run a C++ program that prompts the user for the values of x and y, and then 
uses this formula to find the shortest driving distance across the fields to Joe’s farm:

distance = sqrt(x2 + y2);

Round the answer to the nearest integer value before it’s displayed.. */
 
 
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int d,x,y;
	cout<<"Enter value for x: ";
	cin>>x;
	cout<<"\nEnter value for y: ";
	cin>>y;
	d = sqrt(pow(x,2)+pow(y,2));
	cout<<"\nDistance = "<<ceil(d)<<" miles";	 
	
	return 0;
}