#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float half,quarter,dimens,nickels,pennies,total;
	half = 12;
	quarter = 20;
	dimens = 32;
	nickels = 45;
	pennies = 27;
	total = (12*0.5)+(20*0.25)+(32*0.10)+(45*0.05)+(27*0.01);
	cout<<"Dollar Amount in Piggybank = "<<total<<"$";
	
	return 0;
}