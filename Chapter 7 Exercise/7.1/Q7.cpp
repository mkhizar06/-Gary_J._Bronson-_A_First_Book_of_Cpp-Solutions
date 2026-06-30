#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int i,sum;
	float avg;
	float value;
	const int numbers = 8;
	int grades[numbers];
	sum = 0;
	for(i=0;i<8;i++)
	{
		cout<<"\nEnter number at index "<<i<<": ";
		cin>>grades[i];
		sum += grades[i];
		avg = sum/8;
	}
	cout<<"\n\nThe numbers in the list = ";
	for(i=0;i<8;i++)
	{
		cout<<grades[i]<<" ";
	}
	cout<<"\n\nAverage of numbers in the list = "<<fixed<<setprecision(2)<<avg;

}