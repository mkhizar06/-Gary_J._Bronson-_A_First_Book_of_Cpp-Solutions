 /*  (Program) Write, compile, and run a C++ program to calculate the distance between two 
points with the coordinates (7, 12) and (3, 9). Use the fact that the distance between two points 
with the coordinates (x1, y1) and (x2, y2) is given by this formula:
distance = sqrt of (x2-x1)2+(y2-y1)2. */


#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	float x1,x2,y1,y2,d;
	x1=-12;
	x2=22;
	y1=-15;
	y2=5;
	d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	cout<<"\nDistance = "<<fixed<<setprecision(2)<<d<<"\n";
}