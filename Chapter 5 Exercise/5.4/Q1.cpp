/* (Program) a. Using a do-while statement, write, compile, and run a C++ program to accept 
a grade. The program should request a grade continuously as long as an invalid grade is 
entered. An invalid grade is any grade less than 0 or greater than 100. After a valid grade has 
been entered, your program should display the value of the grade entered. */

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int grade;
	do
	{
		cout<<"\nEnter grade between 0 and 100: ";
	    cin>>grade;
		if (grade<0 || grade>100)
		{
			cout<<"\nInvalid Grade!\n";
			continue;
		}
	} while(grade<0 || grade>100);
	cout<<"\nGrade: "<<grade;
}