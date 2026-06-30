#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	float m,n,p;
	m=18;
	n=16;
	p=sqrt(abs(m-n));
	cout<<"p = "<<fixed<<setprecision(3)<<p;
	
	return 0;
}