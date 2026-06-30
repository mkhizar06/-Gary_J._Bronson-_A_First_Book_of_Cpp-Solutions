#include<iostream>

using namespace std;

int main()
{
	float numYears,interestRate;
	cout<<"Enter number of years of money left in bank: ";
	cin>>numYears;
	if(numYears > 5)
	{
		interestRate = 4.5;
		cout<<"Bank pays interest at the rate of: "<<interestRate<<"%";
	}
	else
	{
		interestRate = 3.0;
		cout<<"Bank pays interest at the rate of: "<<interestRate<<"%";
	}

	
	return 0;
}