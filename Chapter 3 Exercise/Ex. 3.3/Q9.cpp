/* The maximum height reached by a ball thrown with an initial velocity, v, in 
meters/sec, at an angle of u is given by this formula:
height = (.5 × v2 × sin2 u) / 9.8
Using this formula, write, compile, and run a C++ program that determines and displays the 
maximum height reached when the ball is thrown at 5 mph at an angle of 60 degrees. (Hint: 
Make sure to convert the initial velocity into the correct units. There are 1609 meters in a 
mile.) Calculate the maximum height manually, and verify the result your program produces. 
After verifying the result, use your program to determine the height reached by a ball thrown 
at 7 mph at an angle of 45 degrees. */


#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	/*float v_ms,v_mph,u,h;
	v_mph = 5;
	u = 60*0.01745;
	v_ms = (v_mph*1609)/3600; 
	h = (0.5*pow(v_ms,2)*pow(sin(u),2))/9.8;
	cout<<"\nHeight = "<<fixed<<setprecision(2)<<h<<" m"<<"\n"; */
	
	float v_ms,v_mph,u,h;
	v_mph = 7;
	u = 45*0.01745;
	v_ms = (v_mph*1609)/3600; 
	h = (0.5*pow(v_ms,2)*pow(sin(u),2))/9.8;
	cout<<"\nHeight = "<<fixed<<setprecision(2)<<h<<" m"<<"\n";
	
	return 0;
}