/* (Program) Write a C++ program to calculate and display the midpoint coordinates of the line 
connecting the two points with coordinates of (3,7) and (8,12). Use the fact that the midpoint 
coordinates between two points with the coordinates (x1,y1) and (x2,y2) are ((x2 + x1) / 2, 
(y2 + y1) / 2). Your program should produce this display:
The x coordinate of the midpoint is xxx.xx
The y coordinate of the midpoint isƒxxx.xx
The xxx.xx denotes placing the calculated value in a field wide enough for three places to 
the left of the decimal point and two places to the right of it.

Verify your program using the following test data:
Test data set 1: Point 1 = (0,0) and Point 2 = (16,0)
Test data set 2: Point 1 = (0,0) and Point 2 = (0,16)
Test data set 3: Point 1 = (0,0) and Point 2 = (-16,0)
Test data set 4: Point 1 = (0,0) and Point 2 = (0,-16)
Test data set 5: Point 1 = (-5,-5) and Point 2 = (5,5)
When you have completed your verification, use your program to complete the following table.

Pointt1  Point2     Midpoint
-------  -------    --------
(4,6)    (16,18)
(22,3)   (8,12)
(-10,8)  (14,4)
(-12,2)  (14,3.1)
(3.1,-6) (20,16)
(3.1,-6) (-16,-18)*/

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	float x1=3.1;
	float x2=-6;
	float y1=-18;
	float y2=-16;
	float M1,M2;
	M1 = (x2+x1)/2;
	M2 = (y2+y1)/2;
	cout<<"\nMidpoint of x-cordinate = "<<fixed<<setprecision(2)<<M1;
	cout<<"\n\nMidpoint of y-cordinate = "<<fixed<<setprecision(2)<<M2<<"\n";
	
	return 0;
}