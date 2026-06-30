#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float feet,meter;
	feet = 3;
	cout<<"Feet:"<<"\t\t"<<"Meter:\n";
	while(feet<=30)
	{
		meter = feet/3.28;
		cout<<"\n"<<feet<<"\t\t"<<meter;
		cout<<"\n";
		feet+=3;
	}
	
	return 0;
}