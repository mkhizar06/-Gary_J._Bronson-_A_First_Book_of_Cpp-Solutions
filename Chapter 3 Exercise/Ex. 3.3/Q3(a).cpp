#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int a,b,c,area;
	a=30;
	b=18;
	c=16;
	area = (c*b*sin(a))/2;
	cout<<"Area = "<<abs(area);
	
	return 0;
}