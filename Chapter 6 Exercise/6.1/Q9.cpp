/* (Program) a. The time in hours, minutes, and seconds is to be passed to a function named 
totsec(). Write totsec() to accept these values, determine the total number of seconds in 
the passed data, and display the calculated value.
b. Include the totsec() function written for Exercise 9a in a working program. The main()
function should correctly call totsec() and display the value the function returns. Use 
the following test data to verify your program’s operation: hours = 10, minutes = 36, and 
seconds = 54. Make sure to do a hand calculation to verify the result your program displays. */

#include<iostream>
#include<iomanip>

using namespace std;

double totsec(double hours,double minutes,double seconds)
{
	int h,m,totalsec;
	h=hours*3600;
	m=minutes*60;
	totalsec=h+m+seconds;
	cout<<"\nTotal Seconds = "<<totalsec<<"\n";
}

int main()
{
	double a,b,c;
	cout<<"Enter time in hours: ";
	cin>>a;
	cout<<"\nEnter time in minutes: ";
	cin>>b;
	cout<<"\nEnter time in seconds: ";
	cin>>c;
	totsec(a,b,c);
	
	return 0;
}