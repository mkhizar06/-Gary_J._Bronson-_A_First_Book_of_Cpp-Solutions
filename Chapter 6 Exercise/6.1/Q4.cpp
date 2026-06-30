/* (Practice) a. Write a function called mult() that accepts two double-precision numbers as 
parameters, multiplies these two numbers, and displays the result. */

#include<iostream>
#include<iomanip>

using namespace std;

double mult(double n1,double n2)
{
	double prod;
	prod=n1*n2;
	
	return prod;
}

int main()
{
	double a,b;
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"\nEnter 2nd number: ";
	cin>>b;
	cout<<"\nProduct = "<<mult(a,b);
	
	return 0;
}