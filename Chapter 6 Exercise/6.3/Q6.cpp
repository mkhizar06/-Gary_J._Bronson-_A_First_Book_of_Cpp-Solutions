/* (Program) Write a function named yearCalc() that has an integer parameter representing 
the total number of days from the date 1/1/2000 and reference parameters named year, month, 
and day. The function is to calculate the current year, month, and day given the number of days 
passed to it. Using the reference parameters, the function should alter the arguments in the 
calling function. For this problem, assume each year has 365 days, and each month has 30 days. */

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

double yearCalc(int,int&,int&,int&);
double yearCalc(int total_days,int& years,int& months,int& days)
{
	const int fix_year=2000;
	years=years-fix_year;
	months=months-1;
	int day_years=years*365;
	int day_months=months*30;
	
	return total_days=day_years+day_months+days;
	
}

int main()
{
	int t_d,y,m,d;
	cout<<"\nEnter year: ";
	cin>>y;
	cout<<"\nEnter month: ";
	cin>>m;
	cout<<"\nEnter days: ";
	cin>>d;
	cout<<"\nTotal Days = "<<yearCalc(t_d,y,m,d);
	
	return 0;
}