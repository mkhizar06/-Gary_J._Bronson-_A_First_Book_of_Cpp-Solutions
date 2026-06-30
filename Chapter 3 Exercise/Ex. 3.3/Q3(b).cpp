#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	float c,a,b;
	a=6;
	b=5;
	c=sqrt((a*a)+(b*b));
	cout<<"c = "<<fixed<<setprecision(2)<<c;
	
	return 0;
}