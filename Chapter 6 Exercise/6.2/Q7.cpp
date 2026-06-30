/* (Program) a. Write a function named totamt() that uses four parameters named quarters, 
dimes, nickels, and pennies, which represent the number of each of these coins in a piggybank.
The function should determine the dollar value of the number of quarters, dimes, 
nickels, and pennies passed to it and return the calculated value. */

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

float totamt(float quarters,float dimes,float nickels,float pennies)
{
	float dollars;
	const float quarter=0.25,dime=0.10,nickel=0.05,penny=0.01;
	dollars=(quarters*quarter)+(dimes*dime)+(nickels*nickel)+(pennies*penny);
	
	return dollars;
}

int main()
{
	float amount,q,d,n,p;
	cout<<"\nEnter no. of quarters: ";
	cin>>q;
	cout<<"\nEnter no. of dimes: ";
	cin>>d;
	cout<<"\nEnter no. of nickels: ";
	cin>>n;
	cout<<"\nEnter no. of pennies: ";
	cin>>p;
	amount=totamt(q,d,n,p);
	cout<<"\nTotal Amount of Dollars = $"<<amount;
}