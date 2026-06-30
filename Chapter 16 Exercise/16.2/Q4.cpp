/* (Program) a. Declare a single structure data type suitable for an employee structure of the 
type shown in the following chart:
Number    Name     Rate   Hours
3462     Jones     9.62    40
6793     Robbins   8.83    38
6985     Smith     8.22    45
7834     Swain     9.89    40
8867    Timmins    8.43    35
9002    Williams   9.75    42
b. Using the data type declared in Exercise 4a, write a C++ program that interactively accepts 
the chart’s data in an array of six structures. After the data has been entered, the program 
should create a payroll report listing each employee’s name, number, and gross pay. Include 
the total gross pay of all employees at the end of the report. */

#include<iostream>
#include<cctype>
#include<stdlib.h>

using namespace std;

struct employee
{
	double number;
	char name[40];
	double rate;
	int hours;
};

int main()
{
	int i=0;
	const int size=6;
	employee arr[size];
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter Data for Record "<<i+1<<":\n";
		cout<<"\nEnter Name of employee: ";
		gets(arr[i].name);
		cout<<"\nEnter Number id of employee: ";
		cin>>arr[i].number;
		cin.ignore();
		cout<<"\nEnter Rate of employee: ";
		cin>>arr[i].rate;
		cin.ignore();
		cout<<"\nEnter Hours of employee: ";
		cin>>arr[i].hours;
		cin.ignore();
		cout<<"\n---------------------------------\n";
	}
}
