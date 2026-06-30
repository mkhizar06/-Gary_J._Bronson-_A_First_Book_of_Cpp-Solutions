#include<iostream>

using namespace std;

int main()
{
	float temp;
	cout<<"Enter temperature: ";
	cin>>temp;
	if (temp>100)
	{
		cout<<"The temperature is above the boiling point of water!";
	}
	else
	{
		cout<<"The temperature is below the boiling point of water!";
	}
	
	return 0;
}
