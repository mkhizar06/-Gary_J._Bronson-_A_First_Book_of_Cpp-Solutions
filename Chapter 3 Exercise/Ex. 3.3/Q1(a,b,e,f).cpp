#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float diff1,diff2,a,b,c;
	a = 6.37;
	b = 5;
	c = 3;
	diff1 = a-b;
	diff2 = (a*a)-(b*b);
	cout<<"Square root of '"<<a<<"' = "<<sqrt(a);
	cout<<"\n\n"<<"Square root of (a-b) = "<<sqrt(diff1);
	cout<<"\n\n"<<"Absoltue value of (a2-b2) = "<<abs(diff2);
	cout<<"\n\n"<<"The value of 'e' raised to the third power = "<<exp(c)<<"\n";
	
	return 0;
}