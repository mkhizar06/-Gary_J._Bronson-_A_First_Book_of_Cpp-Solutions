#include<iostream>
#include<cmath>
#include<iomanip>
#include<conio.h>

using namespace std;

int main()
{
	float interest;
	float initial;
	int i,years;
	cout<<"Enter Amount of money initially deposited in account: ";
	cin>>initial;
	cout<<"\nEnter interest rate added for each year: ";
	cin>>interest;
	cout<<"\nEnter the number of years to display: ";
	cin>>i;
	cout<<"\nYear:"<<setw(30)<<"Amount at end of year:\n";
	for(years=1;years<=i;years++)
	{
		initial += initial * interest;
		cout<<"\n"<<years<<setw(20)<<"$"<<initial;
		cout<<"\n";
	}
	
	return 0;
}
