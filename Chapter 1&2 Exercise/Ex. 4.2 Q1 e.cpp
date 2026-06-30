#include<iostream>

using namespace std;

int main()
{
	float slope1,slope2,approx;
	cout<<"Enter slope1: ";
	cin>>slope1;
	cout<<"Enter slope2: ";
	cin>>slope2;
	if(slope1<0.001 && slope2<0.001)
	{
		approx = 0;
		cout<<"Approx = "<<approx;
	}
	else
	{
		approx = (slope1-slope2)/2.0;
		cout<<"Approx = "<<approx;
	}
	
	
	return 0;
}
