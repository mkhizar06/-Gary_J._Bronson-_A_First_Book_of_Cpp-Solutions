#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	float mileage,gallons,mpg;
	int count,i;
	i=1;
	count = 1;

	while(count<=8)
	{
		cout<<"Enter Mileage: ";
		cin>>mileage;
		cout<<"\nEnter Gallons: ";
        cin>>gallons;
		mpg = (mileage-22495)/gallons;
		cout<<"\n"<<"Mpg = "<<mpg<<"\n";
		cout<<"\n";
		count++;
	return 0;
}
