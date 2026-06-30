/* (Program) Write a program that stores the following numbers in the array named miles: 15, 
22, 16, 18, 27, 23, and 20. Have your program copy the data stored in miles to another array 
named dist, and then display the values in the dist array. Your program should use pointer 
notation when copying and displaying array elements. */

#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

int main()
{
	int i,size=7;
	int miles[size]={15,22,16,18,27,23,20};
	int* copyPt=miles;
	int dist[size];
	cout<<"\nMiles: [ ";
	for(i=0;i<size;i++)
	{
		cout<<*(copyPt+i)<<"  ";
		dist[i]=*(copyPt+i);
	}
	cout<<"]\n";
	cout<<"\nDistance: [ ";
	for(i=0;i<size;i++)
	{
		cout<<dist[i]<<"  ";
	}
	cout<<"]\n";
	
	return 0;
}