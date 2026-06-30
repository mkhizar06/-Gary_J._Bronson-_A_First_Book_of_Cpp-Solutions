/* (Program)a. Write a function named daycount() that accepts a month,day and year as its 
input arguments;calculates an integer representing the total number of days from the turn of 
the century to the date that’s passed; and returns the calculated integer to the calling function. 
For this problem, assume each year has 365 days and each month has 30 days. Test your function by
verifying that the date 1/1/00 returns a day count of 1. */

#include<iostream>
#include<cmath>

using namespace std;

int daycount(int,int,int);
int daycount(int day,int month,int year)
{
	int years_from_century=year-2000;
	int days_from_century=years_from_century*365;
	int days_from_months=month*30;
	int totaldays=days_from_century+days_from_months;
	
	return totaldays;
}

int main()
{
	int y,m,d;
	cout<<"\nEnter the day: ";
	cin>>d;
	cout<<"\nEnter the month: ";
	cin>>m;
	cout<<"\nEnter the year [from 2000]: ";
	cin>>y;
	cout<<"\nDate: "<<d<<"/"<<m<<"/"<<y;
	cout<<"\n\nTotal Days from start of the century = "<<daycount(d,m,y);
	
}