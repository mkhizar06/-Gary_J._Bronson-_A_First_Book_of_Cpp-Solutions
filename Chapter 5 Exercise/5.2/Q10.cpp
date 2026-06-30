#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	float r,a,n,series,sum,count;
	r=0.5;
	a = 1;
	n = 10;
	sum = 0;
	series = 1;
	count = 1;
	cout<<"Geometric series:\n\n";
	while(count<=n)
	{
		cout<<series<<" + ";
		series*=r;
		count++;
	}
	sum = a*(1 - pow(r,n)) / (1 - r);
	cout<<"\n\nSum of Geometric series = "<<sum<<"\n";
	
	return 0;
}
