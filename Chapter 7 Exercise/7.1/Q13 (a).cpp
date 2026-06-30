/* (Program) a. Write, compile, and run a C++ program that reads a list of double-precision 
grades from the keyboard into an array named grade. The grades are to be counted as they’re 
read, and entry is to be terminated when a negative value has been entered. After all grades 
have been input, your program should find and display the sum and average of the grades. The 
grades should then be listed with an asterisk (*) placed in front of each grade that’s below the 
average. */

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	double grades[5];
	int sum=0;
	float avg;
	for(int i=0;i<5;i++)
	{
		cout<<"\nEnter value at index "<<i<<": ";
		cin>>grades[i];
		sum+=grades[i];
		avg=sum/10;
	}
	cout<<"\n\nSum = "<<sum;
	cout<<"\n\nAverage = "<<avg;
	cout<<"\n\nList of grades: [ ";
	for(int i=0;i<5;i++)
	{
		if(grades[i]<avg)
		{
			cout<<"*";
		}
		cout<<grades[i]<<" ";
	}
	cout<<"]";
	
    return 0;
}