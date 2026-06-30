/* (Program) a. Write a program that stores the following numbers in an array named rates: 
6.25, 6.50, 6.8, 7.2, 7.35, 7.5, 7.65, 7.8, 8.2, 8.4, 8.6, 8.8, and 9.0. Display the values in the array 
by changing the address in a pointer called dispPt. Use a for statement in your program. */

#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

int main()
{
	int i,size=13;
	double rates[size]={6.25,6.50,6.8,7.2,7.35,7.5,7.65,7.8,8.2,8.4,8.6,8.8,9.0};
	double* dispPt=rates;
	cout<<"Rate: ";
	for(i=0;i<size;i++)
	{
		cout<<*(dispPt+i)<<"  ";
	}
	
	return 0;
}