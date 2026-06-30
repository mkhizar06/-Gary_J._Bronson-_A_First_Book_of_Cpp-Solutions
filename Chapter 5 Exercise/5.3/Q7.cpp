#include<iostream>
#include<iomanip>
#include<cmath>
#include<conio.h>

using namespace std;

int main()
{
	float c,f;
	f = 20.0;
	int i,count;
	cout<<"Enter the no. of conversions you want: ";
	cin>>count;
	cout<<"\nFahrenheit temp:"<<setw(20)<<"Celsius temp:\n";
	for(i=0;i<count;i++)
	{
		c = (5.0/9.0) * (f-32.0);
		cout<<"\n"<<setw(5)<<f<<setw(25)<<c<<"\n";
		f+=4;
	}
	
	return 0;
}