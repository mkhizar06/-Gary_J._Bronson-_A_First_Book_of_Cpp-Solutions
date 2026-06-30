#include<iostream>

using namespace std;

int main()
{
	float time_on_deposit,interest_rate;
	cout<<"Enter amount of time in years: ";
	cin>>time_on_deposit;
	if(time_on_deposit>=5)
	{
		interest_rate = 0.040;
		cout<<"The interest rate on this amount of time is "<<interest_rate<<"%";
	}
	else if(time_on_deposit<5 && time_on_deposit>=4)
	{
		interest_rate = 0.035;
		cout<<"The interest rate on this amount of time is "<<interest_rate<<"%";
	}
	else if(time_on_deposit<4 && time_on_deposit>=3)
	{
		interest_rate = 0.030;
		cout<<"The interest rate on this amount of time is "<<interest_rate<<"%";
	}
	else if(time_on_deposit<3 && time_on_deposit>=2)
	{
		interest_rate = 0.025;
		cout<<"The interest rate on this amount of time is "<<interest_rate<<"%";
	}
	else if(time_on_deposit<2 && time_on_deposit>=1)
	{
		interest_rate = 0.020;
		cout<<"The interest rate on this amount of time is "<<interest_rate<<"%";
	}
	else
	{
		interest_rate = 0.15;
		cout<<"The interest rate on this amount of time is "<<interest_rate<<"%";
	}
	
	return 0;
}