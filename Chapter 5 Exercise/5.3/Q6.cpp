#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int count,sq,cube;
	cout<<"\nNumbers:\tSquares:\tCubes:\n";
	cout<<"-------\t\t-------\t\t------\n";
	for(count=10;count>=1;count--)
	{
		sq=count*count;
		cube=count*count*count;
		cout<<"\n"<<count<<"\t\t"<<sq<<"\t\t"<<cube<<"\n";
	}
	
	return 0;
}