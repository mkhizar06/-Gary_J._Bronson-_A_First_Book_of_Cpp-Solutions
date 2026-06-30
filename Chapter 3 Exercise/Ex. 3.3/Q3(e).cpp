#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	float b,x;
	x=90*57.3;
	b = pow(sin(x),2)-pow(cos(x),2);
	cout<<"b = "<<fixed<<setprecision(2)<<b;
	
	return 0;
}