/*(Practice) a. Write a declaration to store the string “This is a sample” in an array named 
samtest. Include the declaration in a program that displays the values in samtest by using a 
for loop that uses a pointer access to each element in the array */

#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
	int i;
	int size=20;
	char samtest[size]="This is a sample";
	char* ptr;
	ptr=samtest;
	for(i=0;i<size;i++)
	{
		cout<<*(ptr+i);
	}
}