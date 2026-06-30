/* (Program) Write a C++ program that uses a structure for storing a stock name, its estimated 
earnings per share, and its estimated price-to-earnings ratio. Have the program prompt the user 
to enter these items for five different stocks, each time using the same structure to store the 
entered data. When data has been entered for a particular stock, have the program compute 
and display the anticipated stock price based on the entered earnings and price-per-earnings 
values. For example, if a user enters the data XYZ 1.56 12, the anticipated price for a share 
of XYZ stock is (1.56) × (12) = $18.72. */

#include<iostream>
#include<string>
#include<cstdlib>
#include<cctype>

using namespace std;

struct stock
{
	char name[30];
	double earnings_per_share;
	int price_ratio;
	double anticipated;
};

int main()
{
	stock st;
	for(int i=1;i<=5;i++)
	{
		cout<<"\nEnter stock name for "<<i<<": ";
		gets(st.name);
		cout<<"\nEnter earnings per share for stock '"<<st.name<<"' : ";
		cin>>st.earnings_per_share;
		cin.ignore(50,'\n');
		cout<<"\nEnter price ratio: ";
		cin>>st.price_ratio;
		cin.ignore(50,'\n');
		st.anticipated=st.earnings_per_share*st.price_ratio;
		cout<<"\nAnticipated stock price = "<<"$"<<st.anticipated<<"\n";
		cout<<"\n--------------------------------------------------------\n";
	}
	
}