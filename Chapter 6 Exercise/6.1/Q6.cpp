/* (Practice) a. Write a function named powfun() that raises an integer number passed to it to 
a positive integer power and displays the result. The positive integer should be the second 
value passed to the function. Declare the variable used to store the result as a long-integer data 
type to ensure enough storage for the result. */

#include<iostream>
#include<iomanip>

using namespace std;

int powfun(int n,int p)
{
	int i;
	int power=1;
	for(i=0;i<p;i++)
	{
		power*=n;
	}
	
	return power;
}

int main()
{
	int a,b;
	cout<<"Enter the number: ";
	cin>>a;
	cout<<"\nEnter power: ";
	cin>>b;
	cout<<"\nAnswer = "<<powfun(a,b);
	
	return 0;
}