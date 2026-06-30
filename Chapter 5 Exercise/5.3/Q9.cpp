#include<iostream>
#include<iomanip>
#include<cmath>
#include<conio.h>

using namespace std;

int main()
{
	float g,l;
	int i,count;
	cout<<"Enter no. of conversions to be made: ";
	cin>>count;
	for(i=1;i<=count;i++)
	{
		cout<<"\nEnter Gallon value "<<i<<": ";
		cin>>g;
		l = (1.0/3.785)*g;
		cout<<"\nLiters = "<<l<<"\n\n";
	}
	
	return 0;
}