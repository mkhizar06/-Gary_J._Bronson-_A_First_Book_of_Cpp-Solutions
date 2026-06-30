 /* .  (Program) Define an array named peopleTypes that can store a maximum of 50 integer 
values entered at the keyboard. Enter a series of 1s, 2s, 3s, and 4s in the array to represent 
people at a local school function; 1 represents an infant, 2 represents a child, 3 represents a 
teenager, and 4 represents an adult. No other integer value should be accepted as valid input, 
and data entry should stop when a negative value is entered. Your program should count the 
number of each 1, 2, 3, and 4 in the array and display a list of how many infants, children, 
teenagers, and adults were at the school function.  */


#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	int peopletypes[50];
	int i,infant,child,teen,adult;
	infant=0;child=0;teen=0;adult=0;
	for(i=0;i<50;i++)
	{
		cout<<"\nEnter people type [1,2,3,4]: ";
		cin>>peopletypes[i];
		if(peopletypes[i]==1)
		{
			infant++;
		}
		if(peopletypes[i]==2)
		{
			child++;
		}
		if(peopletypes[i]==3)
		{
			teen++;
		}
		if(peopletypes[i]==4)
		{
			adult++;
		}
		if(peopletypes[i]<0)
		{
			break;
		}
		if(peopletypes[i]!=1 && peopletypes[i]!=2 && peopletypes[i]!=3 && peopletypes[i]!=4)
		{
			cout<<"\nInvalid input!\n";
			continue;
		}
	}
	cout<<"\nList Of People:{ "<<infant<<" infants, "<<child<<" children, "<<teen<<" teenagers, "<<adult<<" adults }";
	
    return 0;
}