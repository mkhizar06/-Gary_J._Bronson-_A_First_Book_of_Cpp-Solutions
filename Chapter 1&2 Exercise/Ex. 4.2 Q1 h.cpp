#include<iostream>

using namespace std;

int main()
{
	int x,y,z,p;
	cout<<"Enter 1st value: ";
	cin>>x;
	cout<<"Enter 2nd value: ";
	cin>>y;
	cout<<"Enter 3rd value: ";
	cin>>z;
	if (x>y && z<20)
	{
		cout<<"Enter another value: ";
		cin>>p;
	}
	else
	{
		cout<<"No need to enter another value!";
	}
	
	return 0;
}
