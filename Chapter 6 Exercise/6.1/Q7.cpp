/*  (Practice) a. Write a function that produces a table of the numbers from 1 to 10, their squares, 
and their cubes. */

#include<iostream>
#include<iomanip>

using namespace std;

int squares()
{
	int i;
	int sqr,cube;
	cout<<"Numbers:\tSquares:\tCubes:\n";
	cout<<"------\t\t-------\t\t-----\n";
	for(i=1;i<=10;i++)
	{
		sqr=i*i;
		cube=i*i*i;
		cout<<"\n"<<i<<"\t\t"<<sqr<<"\t\t"<<cube<<"\n";
	}
}

int main()
{
	squares();
	
	return 0;
}