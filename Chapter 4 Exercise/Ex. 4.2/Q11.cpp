#include<iostream>

using namespace std;

int main()
{
	int s_salary,j_salary;
	s_salary = 800;
	j_salary = 500;
	char status;
	cout<<"Enter status of salesperson[s/j]: ";
	cin>>status;
	if(status == 's')
	{
		cout<<"Senior's salary = "<<s_salary<<"$";
	}
	else
	{
		cout<<"Junior's salary = "<<j_salary<<"$";
	}
	
	return 0;
}