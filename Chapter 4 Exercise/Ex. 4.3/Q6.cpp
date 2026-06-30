#include<iostream>

using namespace std;

int main()
{
	float tolerance;
	cout<<"Enter tolerance reading of component: ";
	cin>>tolerance;
	if(tolerance<0.1)
	{
		cout<<"Specifiaction: Space Exploration ";
	}
	else if(tolerance>=0.1 && tolerance<1)
	{
		cout<<"Specification: Military Grade";
	}
	else if(tolerance>=1 && tolerance<10)
	{
		cout<<"Specification: Commercial Grade";
	}
	else
	{
		cout<<"Specification: Toy Grade";
	}
	
	return 0;
}