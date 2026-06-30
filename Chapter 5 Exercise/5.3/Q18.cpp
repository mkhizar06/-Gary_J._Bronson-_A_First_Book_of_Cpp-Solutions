#include<iostream>
#include<cmath>
#include<iomanip>
#include<conio.h>

using namespace std;

int main()
{
	float interest;
	float initial=1000;
	int i,j,years;
	for(i=6;i<=12;i++)
	{
		cout<<"-----------------------------------";
		cout<<"\nInterest rate = "<<i<<"%"<<"\n";
		cout<<"\nYear:"<<setw(30)<<"Amount at end of year:\n";
		cout<<"-----"<<"     "<<"--------------------------";
		for(years=1;years<=10;years++)
	    {
	    	interest = 0.06;
		    initial += interest * initial;
		    cout<<"\n"<<years<<setw(20)<<"$"<<initial;
		    cout<<"\n";
		    interest++;
	    }
    }
	return 0;
}
