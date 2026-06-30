#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;

int main()
{
	int numbers[20]={-1,-2,-3,-4,-5,-6,-7,-8,-9,-10,11,12,13,14,15,16,17,18,19,20};
	int i,pos,neg;
	pos=0;
	neg=0;
	int positive[10];
	int negative[10];
	cout<<"\nNumbers: [ ";
	for(i=0;i<20;i++)
	{
		cout<<numbers[i]<<"  ";
	}
	cout<<"]\n";
	for(i=0;i<20;i++)
	{
		if(numbers[i]>0)
		{
			positive[pos]=numbers[i];
			pos++;
		}
		else
		{
			negative[neg]=numbers[i];
			neg++;
		}
	}
	cout<<"\nPositive Numbers: [ ";
	for(i=0;i<pos;i++)
	{
		cout<<positive[i]<<" ";
	}
	cout<<"]\n";
	cout<<"\nNegative Numbers: [ ";
	for(i=0;i<neg;i++)
	{
		cout<<negative[i]<<" ";
	}
	cout<<"]\n";
}