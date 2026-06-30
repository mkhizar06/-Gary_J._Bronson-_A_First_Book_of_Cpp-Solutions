/*  (Program) b. Modify the program written for Exercise 3a to display the total of each row separately. */

#include<iostream>
#include<cmath>
#include<conio.h>

using namespace std;

int main()
{
	int val[3][4]={8,16,9,52,3,15,27,6,14,25,2,10};
	int total2[3];
	int total,i,j;
	cout<<"2D Array:\n\n";
	for(i=0;i<3;i++)
	{
		total=0;
		for(j=0;j<4;j++)
		{
			cout<<val[i][j]<<" ";
		}
		cout<<"\n\n";
	}
	for(i=0;i<3;i++)
	{
		total=0;
		for(j=0;j<4;j++)
		{
			total+=val[i][j];
		}
		total2[i]=total;
		cout<<"\nTotal of row "<<i+1<<" = "<<total2[i]<<"\n";
	}
}
