#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int i,j;
	float value,average,sum;
	sum = 0;
	for(i=1;i<=4;i++)
	{
		cout<<"\nResult of Experiment "<<i<<": \n";
		for(j=1;j<=6;j++)
		{
			cout<<"\n";
			cin>>value;
			sum += value;
		}
		average = sum/6;
		cout<<"\nAverage of Test "<<i<<" = "<<average<<"\n";
	}
}