#include<iostream>

using namespace std;

int main()
{
	int reynolds_num;
	cout<<"Enter Reynolds number: ";
	cin>>reynolds_num;
	if(reynolds_num>3000)
	{
		cout<<"The fluid flow is 'Turbulent'.";
	}
	else if(reynolds_num>=2000 && reynolds_num<=3000)
	{
		cout<<"The fluid flow is 'Transitional'.";
	}
	else if(reynolds_num<2000)
	{
		cout<<"The fluid flow is 'Laminar'.";
	}
	
	return 0;
}