#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	float x1=3;
	float x2=8;
	float y1=7;
	float y2=12;
	float m;
	m = (y2-y1)/(x2-x1);
	cout<<"Slope = "<<fixed<<setprecision(2)<<m;
	
	return 0;
}