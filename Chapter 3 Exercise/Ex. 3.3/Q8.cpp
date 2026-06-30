/* (Program) If a 20-foot ladder is placed on the side of a building at a 85-degree angle, as 
shown in Figure 3.9, the height at which the ladder touches the building can be calculated as 
height = 20 × sin 85°. Calculate this height by hand, and then write, compile, and run a C++ 
program that determines and displays the value of the height. After verifying that your program works correctly, use it to determine the height of a 25-foot ladder placed at an angle of 
85 degrees. */


#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	float h,a,l;
	a=85*0.01745;
	l=25;
	h = l*sin(a);
	cout<<"Height of ladder  = "<<fixed<<setprecision(2)<<h<<" m";
	
	return 0;
}