/* (Program) a. Write a C++ function that accepts an integer argument, determines whether the 
passed integer is even or odd, and displays the result of this determination. (Hint: Use the %
operator.) */

#include<iostream>
#include<conio.h>

using namespace std;

int check(int n)
{
	if(n%2==0)
	{
		cout<<"\nEntered number is even!";
	}
	else
	{
		cout<<"\nEntered number is odd!";
	}
}

int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	check(num);
}