#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int i,j;
	float value,average,sum;
	sum = 0;
	for(i=1;i<=5;i++)
	{
		cout<<"\nResult of Experiment "<<i<<": \n";
		for(j=1;j<=2;j++)
		{
			cout<<"\n";
			cin>>value;
			sum += value;
		}
		average = sum/2;
		cout<<"\nAverage of Experiment "<<i<<" = "<<average<<"\n";
	}
}