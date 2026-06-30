/* a. Write, compile, and run a C++ program to input the following integer numbers 
into an array named grades: 89, 95, 72, 83, 99, 54, 86, 75, 92, 73, 79, 75, 82, and 73. As each 
number is input, add the numbers to a total. After all numbers are input and the total is 
obtained, calculate the average of the numbers, and use the average to determine the deviation of each value from the average. Store each deviation in an array named deviation. Each 
deviation is obtained as the element value less the average of all the data. Have your program 
display each deviation with its corresponding element from the grades array.

b. Calculate the variance of the data used in Exercise 10a. The variance is obtained by squaring 
each deviation and dividing the sum of the squared deviations by the number of deviations.*/

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	int i,sum,sum2,square;
	int grades[14];
	int deviation[14];
	float avg,dev,var;
	sum = 0;
	for(i=0;i<14;i++)
	{
		cout<<"\nEnter Grade value at index "<<i<<": ";
		cin>>grades[i];
		sum+=grades[i];
		avg=sum/14;
	}
	cout<<"\n*------------------------------------*";
	cout<<"\n\nAverage = "<<fixed<<setprecision(2)<<avg;
	cout<<"\n*---------------*";
	dev = 0;
	cout<<"\n\nElements:\tDeviation:\n";
	cout<<"---------------------------";
	sum2=0;
	for(i=0;i<14;i++)
	{
		deviation[i]=grades[i]-avg;
		square=deviation[i]*deviation[i];
		sum2+=square;
		var=sum2/14;
		cout<<"\n"<<"   "<<grades[i]<<"\t\t  "<<deviation[i]<<"\n";
	}
	cout<<"*----------------------------*";
	cout<<"\n Variance = "<<fixed<<setprecision(2)<<var<<"\n";
	cout<<"*-------------------*\n";
	
    return 0;
}