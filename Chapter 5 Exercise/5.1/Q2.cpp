#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int celsius;
	celsius = -10;
	cout<<"Celsius values: \n...............\n";
	while(celsius<=60)
	{
		cout<<"\n"<<"\t"<<celsius<<"\n";
		celsius+=10;
    }
    
	return 0;
}