/* . (Program) Write, compile, and run a C++ program that specifies three one-dimensional arrays 
named price, amount, and total. Each array should be capable of holding 10 elements. 
Using a for loop, input values for the price and amount arrays. The entries in the total
array should be the product of the corresponding values in the price and amount arrays (so 
total[i]=price[i]*amount[i]). After all the data has been entered, display the following output, with the corresponding value under each column heading:

    total   price  amount
    -----   -----  ------     */

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	int i;
	int price[10];
	int amount[10];
	int total[10];
	for(i=0;i<10;i++)
	{
		cout<<"\nEnter value for 'price array' at index "<<"["<<i<<"]: ";
		cin>>price[i];
	}
	cout<<"\n-----------------------------------------------------";
	cout<<"\n";
	for(i=0;i<10;i++)
	{
		cout<<"\nEnter value for 'amount array' at index "<<"["<<i<<"]: ";
		cin>>amount[i];
	}
	cout<<"\n-----------------------------------------------------";
	cout<<"\n";
	cout<<"\nTotal:\tPrice:\t  Amount:\n";
	cout<<"-----\t------\t------------";
	for(i=0;i<10;i++)
	{
		total[i]=price[i]*amount[i];
		cout<<"\n"<<total[i]<<"\t"<<price[i]<<"\t    "<<amount[i]<<"\n";
	}
	
    return 0;
}