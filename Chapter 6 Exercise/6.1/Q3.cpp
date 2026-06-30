/*  (Practice) a. Write a function named findAbs() that accepts a double-precision number 
passed to it, computes its absolute value, and displays the absolute value. A number’s absolute 
value is the number itself if the number is positive and the negative of the number if the 
number is negative. */

#include<iostream>
#include<iomanip>

using namespace std;

int findAbs(int num)
{
	int absolute;
	absolute=abs(num);
	
	return absolute;
}

int main()
{
	int a;
	cout<<"Enter the number: ";
	cin>>a;
	cout<<"\nAbsolute of the number = "<<findAbs(a);
}