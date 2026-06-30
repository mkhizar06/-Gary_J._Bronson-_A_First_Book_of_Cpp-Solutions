/*  (Program) a. Write, compile, and run a C++ program that adds the values of all elements in 
the val array used in Exercise 2 and displays the total. */

#include<iostream>
#include<cmath>
#include<conio.h>

using namespace std;

int main()
{
	int i,j,val[3][4]={{8,16,9,52},{3,15,27,6},{14,25,2,10}};
	int total=0;
	cout<<"2D Array:\n\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<val[i][j]<<" ";
			total+=val[i][j];
		}
		cout<<"\n\n";
	}
	cout<<"Total = "<<total<<"\n";
}
