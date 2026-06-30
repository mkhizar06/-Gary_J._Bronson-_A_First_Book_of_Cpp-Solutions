#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	float prices[9];
	int i;
	for(i=0;i<9;i++)
	{
		cout<<"\nEnter value at index "<<"["<<i<<"]: ";
		cin>>prices[i];
	}
	cout<<"\nThe prices are: ";
	for(i=0;i<9;i++)
	{
	  cout<<prices[i]<<"  ";
	}

	
	return 0;
}