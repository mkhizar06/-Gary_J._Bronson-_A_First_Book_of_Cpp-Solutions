/* (Program) a. Write, compile, and run a C++ program that continuously requests a grade to be 
entered. If the grade is less than 0 or greater than 100, your program should print a message 
informing the user that an invalid grade has been entered; else, the grade should be added to 
a total. When a grade of 999 is entered, the program should exit the repetition loop and compute
and display the average of the valid grades entered. */

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int grade;
	int total=0;
	float avg=0;
	int count=0;
	do
	{
		cout<<"\nEnter grade between 0 and 100: ";
	    cin>>grade;
	    if(grade==999)
		{
			break;
		}
	    if(grade<0 || grade>100)
	    {
	    	cout<<"\nInvalid Grade!";
	    	continue;
		}
		else
		{
			total+=grade;
			count++;
		}  
		avg=total/count; 
	} while(grade!=999);
	cout<<"\nAverage Grade: "<<avg;
}