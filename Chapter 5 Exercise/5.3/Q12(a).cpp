#include<iostream>
#include<cmath>
#include<iomanip>
#include<conio.h>

using namespace std;

int main()
{
	const float interest=0.03;
	float initial=1000;
	int years;
	cout<<"Year:"<<setw(30)<<"Amount at end of year:\n";
	for(years=1;years<=10;years++)
	{
		initial += initial * interest;
		cout<<"\n"<<years<<setw(20)<<"$"<<initial;
		cout<<"\n";
	}
	
	return 0;
}
