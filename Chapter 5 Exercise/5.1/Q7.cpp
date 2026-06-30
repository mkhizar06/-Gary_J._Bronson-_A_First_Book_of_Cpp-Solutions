#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	float avg_speed,d,hours;
	avg_speed = 55;
	hours = 0.5;
	cout<<"Hours:"<<"\t\t"<<"Distance in miles:\n";
	while(hours<=4)
	{
		d = avg_speed * hours;
		cout<<"\n";
		cout<<hours<<"\t\t"<<d;
		cout<<"\n";
		hours+=0.5;
	}
	
	
	return 0;
}