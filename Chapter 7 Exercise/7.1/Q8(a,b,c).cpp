#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	int i,largest,smallest;
	largest = INT_MIN;
	smallest = INT_MAX;
	int fmax[10];
	int position1,position2;
	for(i=0;i<10;i++)
	{
		cout<<"\nEnter number at index "<<"["<<i<<"]: ";
		cin>>fmax[i];
		if(fmax[i]>largest)
		{
			largest = fmax[i];
			position1 = i;
		}
		if(fmax[i]<smallest)
		{
			smallest = fmax[i];
			position2 = i;
		}
	}
	cout<<"---------------------------------";
	cout<<"\nArray = ";
	for(i=0;i<10;i++)
	{
		cout<<fmax[i]<<" ";
	}
	cout<<"\n----------------------------------";
	cout<<"\nThe maximum value in array = "<<largest;
	cout<<"\nIt is found at index "<<position1<<"\n";
	cout<<"---------------------------------\n";
	cout<<"The minimum value in array = "<<smallest;
	cout<<"\nIt is found at index "<<position2<<"\n";
	
	return 0;
}
