/* (Program) a. Write a C++ program that accepts a user-entered date. Have the program calculate 
   and display the date of the next day. For the purposes of this exercise, assume all months 
   consist of 30 days. */

#include<iostream>
#include<string>
#include<cctype>
#include<iomanip>
#include<stdlib.h>

using namespace std;

struct Date
{
	double day;
	double month;
	double year;
};

int main()
{
	Date dt;
	cout<<"\nEnter Day (1-30): ";
	cin>>dt.day;
	cout<<"\nEnter Month (1-12): ";
	cin>>dt.month;
	cout<<"\nEnter Year: ";
	cin>>dt.year;
	dt.day++;
	if(dt.day>30)
	{
		dt.day=1;
		dt.month++;
		if(dt.month>12)
		{
			dt.month=1;
			dt.year++;
		}
	}
	cout<<"\nDate: "<<dt.day<<"/"<<dt.month<<"/"<<dt.year;
	
	return 0;
}