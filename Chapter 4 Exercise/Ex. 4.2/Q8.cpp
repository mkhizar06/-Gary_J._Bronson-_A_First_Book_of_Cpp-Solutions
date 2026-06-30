#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	float reciprocal,num;
	cout<<"Enter a number: ";
	cin>>num;
	if(num!=0 && num>0)
	{
		reciprocal = 1/num;
		cout<<"Reciprocal = "<<setprecision(2)<<reciprocal;
		cout<<"\nSquare root = "<<setprecision(2)<<sqrt(num);
	}
	else
	{
		cout<<"Wrong input!";
	}
	
	return 0;
}