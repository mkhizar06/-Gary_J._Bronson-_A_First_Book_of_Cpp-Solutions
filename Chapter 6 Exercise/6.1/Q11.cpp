/*   (Program) a. Write and test a C++ function named makeMilesKmTable() to display a table 
of miles converted to kilometers. The arguments to the function should be the starting and 
stopping values of miles and the increment. The output should be a table of miles and their 
equivalent kilometer values. Use the relationship that 1 mile = 1.61 kilometers. */

#include<iostream>
#include<iomanip>

using namespace std;

double makeMilesKmTable(double start,double values,double incr)
{
	int i;
	double km;
	cout<<"\nMiles:\tKilometers:\n";
	cout<<"------\t------------\n";
	for(i=0;i<values;i++)
	{
		km = start*1.61;
		cout<<"\n"<<start<<"\t"<<km<<"\n";
		start+=incr;
	}
}

int main()
{
	double a,b,c;
	cout<<"Enter starting value (miles): ";
	cin>>a;
	cout<<"\nEnter no. of conversions: ";
	cin>>b;
	cout<<"\nEnter increments: ";
	cin>>c;
	makeMilesKmTable(a,b,c);
	
	return 0;
}