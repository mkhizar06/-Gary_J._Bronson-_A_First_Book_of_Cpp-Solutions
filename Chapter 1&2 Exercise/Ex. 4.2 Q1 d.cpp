#include<iostream>

using namespace std;

int main()
{
	float slope,flag;
	cout<<"enter slope: ";
	cin>>slope;
	if(slope<0.5)
	{
		flag = 0;
		cout<<"Flag = "<<flag;
	}
	else
	{
		flag = 1;
		cout<<"Flag = "<<flag;
	}
	
	return 0;
}
