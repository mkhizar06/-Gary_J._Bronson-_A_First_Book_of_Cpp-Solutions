/* (Program) a. Years that are evenly divisible by 400 or are evenly divisible by 4 but not by 100 
are leap years. For example, because 1600 is evenly divisible by 400, 1600 was a leap year. 
Similarly, because 1988 is evenly divisible by 4 but not by 100, it was also a leap year. Using 
this information, write a C++ function that accepts the year as user input and returns a 1 if the 
passed year is a leap year or a 0 if it isn’t. */

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

double Leapyear(int);
double Leapyear(int year)
{
	if((year%400==0) || (year%4==0 && year%100!=0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int y;
	cout<<"\nEnter year: ";
	cin>>y;
	cout<<endl<<Leapyear(y);
	
	return 0;
}