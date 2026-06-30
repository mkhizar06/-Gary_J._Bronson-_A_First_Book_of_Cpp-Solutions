/* (Program) Write a function named time() that has an integer parameter named seconds
and three integer reference parameters named hours, mins, and secs. The function is to 
convert the passed number of seconds into an equivalent number of hours, minutes, and seconds.
Using the reference parameters, the function should alter the arguments in the calling 
function. */

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

void time(int,int&,int&,int&);
void time(int seconds,int& hours,int& mins,int& secs)
{
	hours=seconds/3600;
	mins=seconds/60;
	cout<<"\nHours = "<<hours;
	cout<<"\nMinutes = "<<mins;
	cout<<"\nSeconds = "<<seconds;
}

int main()
{
	int s;
	int h,m,s1;
	cout<<"\nEnter Seconds: ";
	cin>>s;
	time(s,h,m,s1);
	
	return 0;
}