#include<iostream>

using namespace std;

int main()
{
	int grade;
	cout<<"Enter Grade: ";
	cin>>grade;
	if(grade>=70)
	{
		cout<<"A passing grade!";
	}
	else
	{
		cout<<"A failing grade!";
	}
	
	return 0;
}