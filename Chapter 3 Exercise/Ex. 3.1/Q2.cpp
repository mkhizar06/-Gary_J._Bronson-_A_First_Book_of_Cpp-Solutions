#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float a,p,r;
	p = 3.1416;
	cout<<"Enter Radius: ";
	cin>>r;
	a = p*r*r;
	cout<<"Area of Circle = "<<a;
	
	return 0;
}