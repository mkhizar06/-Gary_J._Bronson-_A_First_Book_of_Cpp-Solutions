#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	const float interest = 0.04;
	int years;
	double amount = 24;
	int ending_year;
	ending_year = 1626+400;
	cout<<"Year:"<<setw(30)<<"Amount Available:\n";
	for(years=1626 ; years<=ending_year ; years+=50)
	{
		amount *= pow(1+interest,50);
		cout<<"\n"<<years<<setw(20)<<fixed<<setprecision(2)<<"$"<<amount<<"\n";
	}
	
	return 0;
}
