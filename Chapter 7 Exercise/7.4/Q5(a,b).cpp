/* (Program) a. Write, compile, and run a C++ program that finds and displays the maximum value 
in a two-dimensional array of integers. The array should be declared as a 4-by-5 array of integers 
and initialized with the data 16, 22, 99, 4, 18, -258, 4, 101, 5, 98, 105, 6, 15, 2, 45, 33, 88, 72, 16, and 3.

b. Modify the program written in Exercise 5a so that it also displays the maximum value’s row 
and column subscript values.  */

#include<iostream>
#include<cmath>
#include<conio.h>

using namespace std;

int main()
{
	int integers[4][5]={{16,22,99,4,18},{-258,4,101,5,98},{105,6,15,2,45},{33,88,72,16,3}};
	int pos1,pos2,i,j,largest=INT_MIN;
	cout<<"Array of Integers:\n\n";
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<integers[i][j]<<" ";
			if(integers[i][j]>largest)
			{
				largest=integers[i][j];
				pos1=i;
				pos2=j;
			}
		}
		cout<<"\n\n";
	}
	cout<<"Largest elemnt in array is "<<largest<<"\n";
	cout<<"\nIt is found at row '"<<pos1<<"' & column '"<<pos2<<"'\n";
}
