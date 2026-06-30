#include<iostream>

using namespace std;

int main()
{
	int num1,num2;
	cout<<"Enter 1st number: ";
	cin>>num1;
	cout<<"Enter 2nd number: ";
	cin>>num2;
	if(num1>num2)
	{
		cout<<"The 1st number is greater than 2nd number!";
	}
	else if (num1==num2)
	{
		cout<<"Both numbers are equal!";
	}
	else
	{
		cout<<"The 1st number is smaller than 2nd number!";
	}
	
	return 0;
}