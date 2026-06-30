#include<iostream>

using namespace std;

int main()
{
	float num1,num2,select_code;
	cout<<"Enter 1st number: ";
	cin>>num1;
	cout<<"Enter 2nd number: ";
	cin>>num2;
	cout<<"Enter select code: ";
	cin>>select_code;
	if(select_code == 1)
	{
		num1+num2;
		cout<<"sum = "<<num1+num2;
	}
	else if(select_code == 2)
	{
		num1*num2;
		cout<<"product = "<<num1*num2;
	}
	else if(select_code == 3 && num2!=0)
	{
		num1/num2;
		cout<<"Division = "<<num1/num2;
	}
	else
	{
		cout<<"You have entered wrong input.";
	}
	
	return 0;
}