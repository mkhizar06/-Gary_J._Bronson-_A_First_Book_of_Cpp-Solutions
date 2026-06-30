#include<iostream>

using namespace std;

int main()
{
	int num_credits;
	cout<<"Enter the number of credits completed by the student: ";
	cin>>num_credits;
	if(num_credits<32)
	{
		cout<<"Grade level: Freshman";
	}
	else if(num_credits>=32 && num_credits<=63)
	{
		cout<<"Grade level: Somophore";
	}
	else if(num_credits>=64 && num_credits<=95)
	{
		cout<<"Grade level: Junior";
	}
	else if(num_credits>=96)
	{
		cout<<"Grade level: Senior";
	}
	else
	{
		cout<<"Student has not completed required number of credits!";
	}
	
	return 0;
}