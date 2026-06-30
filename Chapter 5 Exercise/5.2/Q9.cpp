#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int a,d,n,series,sum,count;
	a = 1;
	d = 3;
	n = 100;
	sum = 0;
	series = 1;
	count = 1;
	cout<<"Arithmetic series:\n\n";
	while(count<=n)
	{
		cout<<series<<" + ";
		series+=d;
		count++;
	}
	sum = n/2*(a+(n-1)*d);
	cout<<"\n\nSum of Arithmetic series = "<<sum;
	
	return 0;
}
