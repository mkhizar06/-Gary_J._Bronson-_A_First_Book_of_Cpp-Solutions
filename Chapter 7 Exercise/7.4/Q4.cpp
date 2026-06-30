/*   (Program) Write, compile, and run a C++ program that adds equivalent elements of the twodimensional arrays named first and second.
Both arrays should have two rows and three columns. For example, element [1][2] of the resulting array should be the sum of first[1][2]
and second[1][2]. The first and second arrays should be initialized as follows:
     first                second
  16   18   23          24   52   77
  54   91   11          16   19   59   */

#include<iostream>
#include<cmath>
#include<conio.h>

using namespace std;

int main()
{
	int first[2][3]={{16,18,23},{54,91,11}};
	int second[2][3]={{24,52,77},{16,19,59}};
	int resulting[2][3];
	int i,j;
	cout<<"Resulting Array:\n\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			resulting[i][j]=first[i][j]+second[i][j];
			cout<<resulting[i][j]<<" ";
		}
		cout<<"\n\n";
	}
}
