/* (Program) a. Create a two-dimensional list of integer part numbers and quantities of each 
part in stock, and write a function that displays data in the array in decreasing quantity order. 
No more than 100 different parts are being tracked. Test your program with the following data:

Part No.            Quantity
1001                 62
949                  85
1050                 33
867                  125
346                  59
1025                 105  */

#include<iostream>
#include<conio.h>
#include<cmath>

using namespace std;

const int rows=6;
const int col=2;

int main()
{
	int integers[rows][col]={1001,62,949,85,1050,33,867,125,346,59,1025,105};
	int i,j,np;
	cout<<"Part No.\tQuantity\n";
	cout<<"--------\t--------\n\n";
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<integers[i][j]<<"\t\t";
		}
		cout<<"\n\n";
	}
	cout<<"---------------------------\n\n";
	numberpart(integers);
	
	return 0;
}

