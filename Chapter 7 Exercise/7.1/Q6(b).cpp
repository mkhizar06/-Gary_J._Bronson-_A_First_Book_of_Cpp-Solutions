#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	float prices[9];
	int i;
	for(i=0;i<9;i++)
	{
		cout<<"\nEnter value at index "<<"["<<i<<"]: ";
		cin>>prices[i];
	}
	cout<<"\nThe prices are: \n\n";
	for(i=0;i<9;i++)
	{
	  cout<<prices[i]<<"\t";
	  if(i == 2 || i == 5 || i == 8)
	  {
	  	cout<<"\n\n";
	  }
    }

	
	return 0;
}