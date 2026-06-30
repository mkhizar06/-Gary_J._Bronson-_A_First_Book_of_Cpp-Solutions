/* b. Extend the program written for Exercise 13a to display each grade and its letter equivalent, 
using the following scale:
Greater than or equal to 90 = A
Greater than or equal to 80 and less than 90 = B
Greater than or equal to 70 and less than 80 = C
Greater than or equal to 60 and less than 70 = D
Less than 60 = F. */

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	double grades[5];
	int sum=0;
	float avg;
	for(int i=0;i<5;i++)
	{
		cout<<"\nEnter value at index "<<i<<": ";
		cin>>grades[i];
		sum+=grades[i];
		avg=sum/10;
	}
	cout<<"\n\nSum = "<<sum;
	cout<<"\n\nAverage = "<<avg;
	cout<<"\n\nList of grades: [ ";
	for(int i=0;i<5;i++)
	{
		cout<<grades[i]<<"";
		if(grades[i]>=90)
		{
			cout<<"(A),";
		}
		else if(grades[i]>=80 && grades[i]<90)
		{
			cout<<"(B),";
		}
		else if(grades[i]>=70 && grades[i]<80)
		{
			cout<<"(C),";
		}
		else if(grades[i]>=60 && grades[i]<70)
		{
			cout<<"(D),";
		}
		else
		{
			cout<<"(F),";
		}
	}
	cout<<" ]";
    return 0;
}