/* (Program) Write a function named liquid() that has an integer number parameter and 
reference parameters named gallons, quarts, pints, and cups. The passed integer represents the
total number of cups, and the function is to determine the numbers of gallons, quarts, pints,
and cups in the passed value. Using the reference parameters, the function should alter the
arguments in the calling function. Use these relationships: 2 cups = 1 pint, 4 cups = 1 quart, 
and 16 cups = 1 gallon. */

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

void liquid(int,int&,int&,int&,int&);

int main()
{
	int c,g,q,p,c1;
	cout<<"Enter total number of cups: ";
	cin>>c;
	liquid(c,g,q,p,c1);
	
	return 0;
}

void liquid(int total_cups,int& gallons,int& quarts,int& pints,int& cups)
{
	gallons=total_cups/16;
	quarts=total_cups/4;
	pints=total_cups/2;
	cout<<"\nGallons = "<<gallons;
	cout<<"\nQuarts = "<<quarts;
	cout<<"\nPints = "<<pints;
	cout<<"\nCups = "<<total_cups;
	
}