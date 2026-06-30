 #include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

int main()
{
	double prices[5]={9.92,6.32,12.63,5.95,10.29};
	double units[5];
	double amounts[5];
	int i;
	double total=0;
	for(i=0;i<5;i++)
	{
		cout<<"\nEnter value for 'units' array at index "<<i<<": ";
		cin>>units[i];
		amounts[i]=prices[i]*units[i];
		total+=amounts[i];
	}
	cout<<"\n-------------------------------------------";
	cout<<"\n\n\tPrices:\tUnits:\tAmount:\n";
	cout<<"\t------\t------\t------\n";
	for(i=0;i<5;i++)
	{
		cout<<"\n\t"<<prices[i]<<"  "<<"\t"<<units[i]<<"\t"<<amounts[i]<<"\n";
	}
	cout<<"\n--------------------------------------------\n|";
	cout<<"Total: \t\t"<<total;
	cout<<"\n--------------------------------------------\n\n\n";
	
}