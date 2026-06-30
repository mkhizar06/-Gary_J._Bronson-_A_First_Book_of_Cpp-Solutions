/* (Program) a. Write, compile, and run a C++ program that has a declaration in main() to store 
 the string “Vacation is near” in an array named message. There should be a function call to 
 display() that accepts message in a parameter named strng and then displays the message */
 
#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>

using namespace std;

void display(char [],int);

int main()
{
	const int size=25;
	char message[size];
	display(message,size);
	
	return 0;
}

void display(char message[],int size)
{
	strcpy(message,"Vacation is near");
	cout<<"\nMessage Array: [ "<<message<<" ]";
}

