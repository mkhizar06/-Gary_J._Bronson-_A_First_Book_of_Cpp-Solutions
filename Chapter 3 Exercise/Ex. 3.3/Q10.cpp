/* (Program) A model of worldwide population growth, in billions of people, since 2000 is given 
by this formula:
Population = 7.5 e0.02[Year - 2010]
Using this formula, write, compile, and run a C++ program to estimate the worldwide population in the year 2012.
 Verify the result your program produces by calculating the answer manually, and 
 then use your program to estimate the world’s population in the year 2020. */
 
 
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	float p1,p2;
	int year1,year2;
	year1 = 2012;
	year2 = 2020;
	p1= 7.5*exp(0.02*(year1-2010));
	p2= 7.5*exp(0.02*(year2-2010));
	cout<<"\nWorldwide Population in 2012 = "<<fixed<<setprecision(1)<<p1<<" billion"<<"\n";
	cout<<"\nWorldwide Population in 2020 = "<<fixed<<setprecision(1)<<p2<<" billion"<<"\n";
	 
}