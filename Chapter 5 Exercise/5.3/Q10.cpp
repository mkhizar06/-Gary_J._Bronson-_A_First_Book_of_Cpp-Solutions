#include<iostream>
#include<iomanip>
#include<cmath>
#include<conio.h>

using namespace std;

int main()
{
	float amount = 0.01;
	float total=0.0;
	int sum,d;
	int millionday = 0;
	const int goal = 1000000;
	cout<<"DAYS:"<<setw(22)<<"AMOUNT OWED:"<<setw(20)<<"Total:";
	for(d=1;d<=64;d++)
	{
		total+=amount;
		cout<<"\n\n"<<d<<setw(20)<<"$"<<fixed<<setprecision(2)<<amount<<setw(20)<<fixed<<setprecision(2)<<"$"<<total;
		amount*=2;
		if(total>=goal && millionday == 0)
		{
		   millionday = d;	
		}
	}
	cout<<"\n\nThe king would pay a million dollar on Day "<<millionday<<"\n";
	
	return 0;
}