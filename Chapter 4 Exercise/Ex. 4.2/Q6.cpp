#include<iostream>

using namespace std;

int main()
{
	char code;
	cout<<"Enter character: ";
	cin>>code;
	if(code == 'g')
	{
		cout<<"PROCEED WITH TAKEOFF";
	}
	else
	{
		cout<<"ABORT TAKEOFF";
	}
	
	return 0;
}