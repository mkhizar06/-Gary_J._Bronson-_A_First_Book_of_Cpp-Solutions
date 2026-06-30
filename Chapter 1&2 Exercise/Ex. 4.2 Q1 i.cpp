#include<iostream>

using namespace std;

int main()
{
	int d,time;
	cout<<"Enter Distance: ";
	cin>>d;
	if (d>20 && d<35)
	{
		cout<<"Enter value for variable 'time': ";
		cin>>time;
		cout<<"time = "<<time;
	}
	else
	{
	   cout<<"Distance = "<<d;
	}
	
	return 0;
}
