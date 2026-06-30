/*(Program) The change remaining after an amount is used to pay a restaurant bill of amount 
check can be calculated by using the following C++ statements:
//ƒdetermineƒtheƒnumberƒofƒpenniesƒinƒtheƒchange
//change=(paidƒ-ƒcheck)ƒ*ƒ100;
//ƒdetermineƒtheƒnumberƒofƒdollarsƒinƒtheƒchange
dollarsƒ=ƒ(int)ƒ(change/100);
a. Using the previous statements as a starting point, write a C++ program that calculates the 
number of dollar bills, quarters, dimes, nickels, and pennies in the change when $10 is used 
to pay a bill of $6.07.
b. Without compiling or running your program, check the effect, by hand, of each statement in 
the program and determine what’s stored in each variable as each statement is encountered.
c. When you have verified that your algorithm works correctly, compile and run your program. 
Verify that the result produced by your program is correct, and then use your program to 
determine the change when a check of $12.36 is paid with a 20-dollar bill.*/

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	const float paid = 20.0;
	const float check = 12.36;
	float change;
	float penny,dollars,dime,nickel,quarter;
	change = (paid-check)*100;
	dollars = change/100;
	dime = change/10;
	quarter = change/25;
	nickel = change/5;
	penny = change/1;
	cout<<"Dollars:     Quarters:    Dimes:    Nickels:    Pennies:\n";
	cout<<"\n";
	cout<<dollars<<"\t       "<<quarter<<"\t   "<<dime<<"\t     "<<nickel<<"\t "<<penny<<"\n";
	
	return 0;
}