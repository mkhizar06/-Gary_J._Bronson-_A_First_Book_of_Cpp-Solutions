 /* (Program) The volume of oil stored in an underground 200-foot deep cylindrical tank is 
determined by measuring the distance from the top of the tank to the surface of the oil. 
Knowing this distance and the radius of the tank, the volume of oil in the tank can be determined by using this formula:
volume = p radius2 (200 - distance).
Using this information, write, compile, and run a C++ program that determines the volume of 
oil in a 200-foot tank that has a radius of 10 feet and measures 12 feet from the top of the tank 
to the top of the oil. Your program should display the radius, distance from the top of the tank 
to the oil, and the calculated volume.*/


#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	const float pi=3.141;
	float tank,vol,d,r;
	tank=200;
	r=10;
	d=12;
	vol = pi*(pow(r,2))*(tank-d);
	cout<<"Radius: "<<r;
	cout<<"\n\nDistrance from tank: "<<d<<"\n";
	cout<<"\nVolume = "<<fixed<<setprecision(2)<<vol<<"cm3";
}