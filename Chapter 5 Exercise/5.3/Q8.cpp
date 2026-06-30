#include<iostream>
#include<iomanip>
#include<cmath>
#include<conio.h>

using namespace std;

int main()
{
	float c,f;
	int i,count;
	cout<<"Enter intial fahrenheit value: ";
	cin>>f;
	cout<<"\nEnter no. of conversions to be made: ";
	cin>>count;
	cout<<"\n\nFahrenheit temp:"<<setw(20)<<"Celsius temp:\n";
	for(i=1;i<=count;i++)
	{
		c = (5.0/9.0) * (f-32.0);
		cout<<"\n"<<setw(5)<<f<<setw(25)<<c<<"\n";
		f+=5;
	}
	
	return 0;
}