/*   (Program) a. Write a function template named display() that displays the value of the 
single argument passed to it when the function is called.
b. Include the function template created in Exercise 14a in a complete C++ program that calls 
the function three times: once with a character argument, once with an integer argument, 
and once with a double-precision argument. */

#include<iostream>
#include<conio.h>
#include<cmath>
#include<iomanip>

using namespace std;

char display(char a)
{
	a = 'A';
	cout<<"\nCharacter Argument: "<<a<<endl;
	
}

int display(int b)
{
	b=2;
	cout<<"\nInteger Argument = "<<b<<endl;
}

double display(double c)
{
	c=2.75;
	cout<<"\nDouble Argument: "<<c<<endl;
}

int main()
{
	char n1;
	int n2;
	double n3;
	display(n1);
	display(n2);
	display(n3);
	
}