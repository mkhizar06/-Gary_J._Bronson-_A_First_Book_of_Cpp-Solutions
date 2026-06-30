#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	int i;
	int numbers[5];
	for(i=0;i<5;i++)
	{
		cout<<"\nEnter value for index "<<i<<": ";
		cin>>numbers[i];
	}
	cout<<"\n\nOriginal Array = ";
	for(i=0;i<5;i++)
	{
		cout<<numbers[i]<<" ";
	}
	cout<<"\n\nReverse Array = ";
	for(i=4;i>=0;i--)
	{
		cout<<numbers[i]<<" ";
	}
	cout<<"\n";
	
	return 0;
}