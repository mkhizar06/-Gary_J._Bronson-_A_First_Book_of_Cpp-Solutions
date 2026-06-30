#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	// 1 mile = 5280 feet
	
	float d_in_feet,d_in_miles;
	d_in_miles = 2.36;
	d_in_feet = d_in_miles * 5280;
	cout<<"Distance in feet = "<<d_in_feet<<" ft";
	
	return 0;
}