/* (Program) a. A professor has constructed a 3-by-5 two-dimensional array of grades. This array 
contains the test grades of students in the professor’s advanced compiler design class. Write, 
compile, and run a C++ program that reads 15 array values and then determines the total number of grades in these ranges:
less than 60, greater than or equal to 60 and less than 70, greater than or equal to 70 and less than 80,
greater than or equal to 80 and less than 90, and greater than or equal to 90. */

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int i,j,grades[3][5];
	int c1=0,c2=0,c3=0,c4=0,c5=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<"\nEnter grades for index ["<<i<<"]["<<j<<"]: ";
			cin>>grades[i][j];
			if(grades[i][j]>=90 && grades[i][j]<=100)
			{
				c1++;
			}
			else if(grades[i][j]>=80 && grades[i][j]<90)
			{
				c2++;
			}
			else if(grades[i][j]>=70 && grades[i][j]<80)
			{
				c3++;
			}
			else if(grades[i][j]>=60 && grades[i][j]<70)
			{
				c4++;
			}
			else if(grades[i][j]>=0 && grades[i][j]<60)
			{
				c5++;
			}
			else
			{
				cout<<"Invalid marks!";
				continue;
			}
		}
		cout<<"\n--------------------------------------------------\n";
	}
	cout<<"\n\t\tGRADES\n";
	cout<<"\t\t -------\n\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<"\t"<<grades[i][j]<<"  ";
		}
		cout<<"\n\n";
	}
	cout<<"\nNo. of marks greater than or equal to 90 = "<<c1<<"\n";
	cout<<"\nNo. of marks between 80 & 90 = "<<c2<<"\n";
	cout<<"\nNo. of marks between 70 & 80 = "<<c3<<"\n";
	cout<<"\nNo. of marks between 60 & 70 = "<<c4<<"\n";
	cout<<"\nNo. of marks less than 60 = "<<c5<<"\n";
	
	return 0;
}