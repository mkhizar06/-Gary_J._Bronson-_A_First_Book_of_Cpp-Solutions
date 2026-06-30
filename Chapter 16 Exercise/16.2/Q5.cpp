/* (Program) a. Declare a single structure data type suitable for a car structure of the type 
shown in the following chart:
Car Number     Miles Driven    Gallons Used
25                  1450            62
36                  3240           136
44                  1792            76
52                  2360           105
68                  2114            67
b. Using the data type declared for Exercise 5a, write a C++ program that interactively accepts 
the chart’s data in an array of five structures. After the data has been entered, the program 
should create a report listing each car number and the car’s miles per gallon. At the end of 
the report, include the average miles per gallon for the entire fleet of cars. */

#include<iostream>
#include<cctype>
#include<stdlib.h>
#include<iomanip>

using namespace std;

struct carinfo
{
	double number;
	double miles;
	double gallons;
};

int main()
{
	int i=0;
	const int size=5;
	carinfo arr[size];
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter Data for Record "<<i+1<<":\n";
		cout<<"\nEnter Car Number: ";
		cin>>arr[i].number;
		cout<<"\nEnter Miles Driven: ";
		cin>>arr[i].miles;
		cin.ignore();
		cout<<"\nEnter Gallons used: ";
		cin>>arr[i].gallons;
		cin.ignore();
		cout<<"\n---------------------------------\n";
	}
	cout<<"\n*---------------Cars Information--------------------*\n";
	cout<<"\nCar Number\tMiles Driven\tGallons Used\n";
	cout<<"-----------\t-------------\t------------\n";
	double sum=0;
	double avg;
	for(i=0;i<size;i++)
	{
		sum+=arr[i].miles;
		cout<<arr[i].number<<setw(22)<<arr[i].miles<<setw(18)<<arr[i].gallons<<"\n";
	}
	cout<<"--------------------------------------------------------\n";
	avg=sum/5;
	cout<<"\nAverage miles/gallon = "<<avg;
}
