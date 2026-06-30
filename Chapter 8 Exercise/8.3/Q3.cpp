/* (Program) a. Write a program that stores the string Hooray ƒor All oƒ Us in an array 
named strng. Use the declaration strng[]=“Hooray for All of Us”; which ensures 
that the end-of-string escape sequence \0 is included in the array. Display the characters in 
the array by changing the address in a pointer called messPt. Use a for statement in your 
program. */

#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

int main()
{
	int i,size=30;
	char strng[size]="Hooray for All of Us";
	char* messPt=strng;
	cout<<"String: ";
	for(i=0;i<size;i++)
	{
		cout<<*(messPt+i);
	}
	
	return 0;
}