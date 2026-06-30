/*  a. Modify the function written for Exercise 7a to accept the starting value of the 
table, the number of values to be displayed, and the increment between values. If the increment isn’t set explicitly,
the function should use a default value of 1. Name your function selTab().
A call to selTab(6,5,2); should produce a table of five lines, the first line starting with the number 6
 and each succeeding number increasing by 2. */

#include<iostream>
#include<iomanip>

using namespace std;

int seltab(int start, int values, int incr)
{
	int i;
	int sqr,cube;
	cout<<"\nNumbers:\tSquares:\tCubes:\n";
	cout<<"------\t\t-------\t\t-----\n";
	for(i=0;i<values;i++)
	{
		sqr=start*start;
		cube=start*start*start;
		cout<<"\n"<<start<<"\t\t"<<sqr<<"\t\t"<<cube<<"\n";
		start+=incr;
	}
}

int main()
{
	int a,b,c;
	cout<<"Enter starting value of table: ";
	cin>>a;
	cout<<"\nEnter no. of values to be displayed: ";
	cin>>b;
	cout<<"\nEnter increment you want between values: ";
	cin>>c;
	seltab(a,b,c);
	
	return 0;
}