/* a. Write, compile, and run a C++ program that inputs 10 double-precision numbers 
in an array named raw. After these numbers are entered in the array, your program should cycle 
through raw 10 times. During each pass through the array, your program should select the lowest value in raw and place it
in the next available slot in an array named sorted. When your program is finished, the sorted array should contain the numbers
in raw in sorted order from lowest to highest. (Hint: Be sure to reset the lowest value selected during each pass to a very 
high number so that it’s not selected again. You need a second for loop in the first for loop to 
locate the minimum value for each pass.)

b. The method used in Exercise 15a to sort the values in the array is inefficient. Can you 
determine why? What might be a better method of sorting the numbers in an array? */

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	const int size=10;
	double sorted[size];
	int n=size-1;
	int i,j,temp,smallest;
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter number at index "<<i<<": ";
		cin>>sorted[i];
	}
	cout<<"\nRaw Array: [ ";
	for(i=0;i<size;i++)
	{
		cout<<sorted[i]<<" ";
	}
	cout<<"]\n";
	// Selection Sorting:
	for(i=0;i<n;i++)
	{
		smallest=i;
		for(j=i+1;j<size;j++)
		{
			if(sorted[j]<sorted[smallest])
			{
				smallest=j;
			}
		}
		temp=sorted[smallest];
		sorted[smallest]=sorted[i];
		sorted[i]=temp;
	}
	cout<<"\nSorted Array: [ ";
	for(i=0;i<size;i++)
	{
		cout<<sorted[i]<<" ";
	}
	cout<<"]\n";
	
	/* Bubble Sort Method:
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(sorted[j]>sorted[j+1])
			{
				temp=sorted[j];
				sorted[j]=sorted[j+1];
				sorted[j+1]=temp;
			}
		}
	}
	cout<<"\nSorted Array: [ ";
	for(i=0;i<size;i++)
	{
		cout<<sorted[i]<<" ";
	}
	cout<<"]\n"; */
	
	return 0;	
}