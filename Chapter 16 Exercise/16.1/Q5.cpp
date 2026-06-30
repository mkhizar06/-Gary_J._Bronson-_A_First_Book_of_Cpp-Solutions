/* (Program) Write a C++ program that accepts a user-entered time in hours and minutes. Have 
the program calculate and display the time 1 minute later. */

#include<iostream>
#include<string>
#include<cctype>
#include<iomanip>
#include<stdlib.h>

using namespace std;

struct Time
{
	double hours;
	double minutes;
};

int main()
{
	Time tm;
	cout<<"\nEnter hours (0-23): ";
	cin>>tm.hours;
	cout<<"\nEnter minutes (0-59): ";
	cin>>tm.minutes;
	tm.minutes++;
	if(tm.minutes==60)
	{
		tm.minutes=0;
		tm.hours++;
		if(tm.hours==24)
		{
			tm.hours=0;
		}
	}
	cout<<"\nTime:\n";
	cout<<setw(10)<<tm.hours<<":"<<tm.minutes;
	
	return 0;
}