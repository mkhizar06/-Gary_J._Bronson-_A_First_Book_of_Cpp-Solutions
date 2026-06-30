#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

int main()
{
	double slope[]={17.24,25.63,5.94,33.93,3.71,32.84,35.93,18.24,6.92};
	double maximum=INT_MIN;
	double minimum=INT_MAX;
	int i,pos1,pos2;
	cout<<"Array = [ ";
	for(i=0;i<9;i++)
	{
		cout<<slope[i]<<"  ";
	}
	cout<<"]\n";
	for(i=0;i<9;i++)
	{
		if(slope[i]>maximum)
		{
			maximum=slope[i];
			pos1=i;
		}
		else if(slope[i]<minimum)
		{
			minimum=slope[i];
			pos2=i;
		}
	}
	cout<<"\nMaximum Number = "<<maximum<<"\n";
	cout<<"\nIt is found at index "<<pos1<<"\n";
	cout<<"\nMinimum Number = "<<minimum<<"\n";
	cout<<"\nIt is found at index "<<pos2<<"\n";
}