#include<iostream>

using namespace std;

int main()
{
	float angle;
	cout<<"Enter angle in degrees: ";
	cin>>angle;
	if(angle==90)
	{
		cout<<"Angle is Right.";
	}
	else if(angle>90)
	{
		cout<<"Angle is Obtuse.";
	}
	else
	{
		cout<<"Angle is Acute.";
	}
	
	return 0;
}