/* (Program) a.Write a C++ program that prompts a user to enter the current month, day, and 
year. Store the entered data in a suitably defined record and display the date in an appropriate 
manner. */

#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<cmath>

using namespace std;

struct date
{
	int day;
	int month;
	char year[10];
};

int main()
{
	date record;
	cout<<"\nEnter day: ";
	cin>>record.day;
	cout<<"\nEnter month: ";
	cin>>record.month;
	cin.ignore();
	cout<<"\nEnter year: ";
	cin.getline(record.year,10);
    cout<<"\nDate: "<<record.day<<"/"<<record.month<<"/"<<record.year;
}