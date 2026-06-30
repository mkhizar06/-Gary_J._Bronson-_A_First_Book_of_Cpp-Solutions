/* (Practice) Write a declaration to store the following values in an array named rates: 12.9, 
18.6, 11.4, 13.7, 9.5, 15.2, and 17.6. Include the declaration in a program that displays the values 
in the array by using pointer notation. */

#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int size=7;
	float rates[size]={12.9,28.6,11.4,13.7,9.5,15.2,17.6};
	float* ptr=rates;
	int i;
	cout<<"Rates: ";
	for(i=0;i<size;i++)
	{
		cout<<*(ptr+i)<<" ";
	}
}