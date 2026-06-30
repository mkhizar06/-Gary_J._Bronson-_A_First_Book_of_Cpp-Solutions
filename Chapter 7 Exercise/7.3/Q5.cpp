/* (Program) Write, compile, and run a C++ program that has a declaration in main() to store 
 the following numbers in an array named rates: 6.5, 7.2, 7.5, 8.3, 8.6, 9.4, 9.6, 9.8, and 10.0. 
 There should be a function call to show() that accepts the rates array as a parameter named 
 rates and then displays the numbers in the array */
 
#include<iostream>
#include<iomanip>
#include<cmath>
#include<conio.h>

using namespace std;

void show(double [],int);

int main()
{
	const int size=9;
	double rates[size]={6.5,7.2,7.5,8.3,8.6,9.4,9.6,9.8,10.0};
	show(rates,size);
	
	return 0;
}

void show(double rates[],int size)
{
	int i;
	cout<<"Array of rates: [ ";
	for(i=0;i<size;i++)
	{
		cout<<rates[i]<<",";
	}
	cout<<"]\n";
	
	return;
}
