#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	float sum,r,n,a;
	a=6;
	n=2;
	r=5;
	sum = a*(pow(r,n)-1)/(r-1);
	cout<<"Sum = "<<fixed<<setprecision(1)<<sum;
	
	return 0;
}