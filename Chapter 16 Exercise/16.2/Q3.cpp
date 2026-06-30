/* (Program) Using the data type declared in Exercise 2a, write a C++ program that accepts a 
month from a user in numerical form and displays the name of the month and the number of 
days in the month. For example, in response to an input of 3, the program would display 
March has 31 days. */

#include<iostream>
#include<string>
#include<cctype>
#include<iomanip>
#include<stdlib.h>

using namespace std;

struct DaysInMonth
{
	int month;
	char name[50];
	int days;
	
};

int main()
{
	DaysInMonth dim;
	cout<<"\nEnter the month number (1-12): ";
	cin>>dim.month;
	switch(dim.month)
	{
		case 1: dim.days=31;
		cout<<"\nMonth: January\n";
		cout<<"\nNo. of days = "<<dim.days;
		break;
		case 2: dim.days=28;
		cout<<"\nMonth: February\n";
		cout<<"\nNo. of days = "<<dim.days;
		break;
		case 3: dim.days=31;
		cout<<"\nMonth: March\n";
		cout<<"\nNo. of days = "<<dim.days;
		break;
		case 4: dim.days=30;
		cout<<"\nMonth: April\n";
		cout<<"\nNo. of days = "<<dim.days;
		break;
		case 5: dim.days=31;
		cout<<"\nMonth: May\n";
		cout<<"\nNo. of days = "<<dim.days;
		break;
		case 6: dim.days=30;
		cout<<"\nMonth: June\n";
		cout<<"\nNo. of days = "<<dim.days;
		break;
		case 7: dim.days=31;
		cout<<"\nMonth: July\n";
		cout<<"\nNo. of days = "<<dim.days;
		break;
		case 8: dim.days=31;
		cout<<"\nMonth: August\n";
		cout<<"\nNo. of days = "<<dim.days;
		break;
		case 9: dim.days=30;
		cout<<"\nMonth: September\n";
		cout<<"\nNo. of days = "<<dim.days;
		break;
		case 10: dim.days=31;
		cout<<"\nMonth: October\n";
		cout<<"\nNo. of days = "<<dim.days;
		break;
		case 11: dim.days=30;
		cout<<"\nMonth: November\n";
		cout<<"\nNo. of days = "<<dim.days;
		break;
		case 12: dim.days=31;
		cout<<"\nMonth: December\n";
		cout<<"\nNo. of days = "<<dim.days;
		break;
		
		default:
		{
			cout<<"\nYou have entered wrong month number!";
		}
	}
}