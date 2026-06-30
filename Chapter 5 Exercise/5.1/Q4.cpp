#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	int gallon;
	float liter;
	gallon = 10;
	cout<<"Gallons:"<<"\t"<<"Litres:\n";
	while(gallon<=20)
	{
		liter=gallon*3.785;
		cout<<"\n";
		cout<<"\n"<<gallon<<"\t\t"<<liter;
		gallon+=1;
	
	}
	
	return 0;
}