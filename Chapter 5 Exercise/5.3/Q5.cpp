#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int count,square,cube;
	cout<<"Numbers:"<<setw(12)<<"Squares:"<<setw(12)<<"Cubes:\n";
	for(count=0;count<=20;count+=2)
	{
		square = count*count;
		cube = count*count*count;
		cout<<"\n"<<setw(2)<<count<<setw(15)<<square<<setw(12)<<cube<<"\n";
	}
	
	return 0;
}