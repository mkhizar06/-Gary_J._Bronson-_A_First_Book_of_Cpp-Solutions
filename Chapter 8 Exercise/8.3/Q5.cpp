/* (Program) Write a C++ program that stores the following letters in the array named message: 
This is a test. Have your program copy the data stored in message to another array 
named mess2 and then display the letters in the mess2 array. */

#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

int main()
{
	int i,size=20;
	char message[size]="This is a test";
	char* copyPt=message;
	char mess2[size];
	cout<<"\nMessage: [ ";
	for(i=0;i<size;i++)
	{
		cout<<*(copyPt+i);
		mess2[i]=*(copyPt+i);
	}
	cout<<" ]\n";
	cout<<"\nMess2: [ ";
	for(i=0;i<size;i++)
	{
		cout<<mess2[i];
	}
	cout<<" ]\n";
	
	return 0;
}