/* (Program) Write, compile, and run a C++ program that includes two functions named 
calcavg() and variance(). The calcavg() function should calculate and return the average of
values stored in an array named testvals. The array should be declared in main() and include
the values 89, 95, 72, 83, 99, 54, 86, 75, 92, 73, 79, 75, 82, and 73. The variance()
function should calculate and return the variance of the data. The variance is obtained by 
subtracting the average from each value in testvals, squaring the values obtained, adding 
them, and dividing by the number of elements in testvals. The values returned from 
calcavg() and variance() should be displayed by using cout statements in main(). */
 
#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>

using namespace std;

double calcavg(double [],int);
double variance(double [],int,double);

int main()
{
	const int size=14;
	double avg;
	double testvals[size]={89,95,72,83,99,54,86,75,92,73,79,75,82,73};
	int i;
	cout<<"\nTestvals Array: [ ";
	for(i=0;i<size;i++)
	{
		cout<<testvals[i]<<" ";
	}
	cout<<"]\n";
	cout<<"\nAverage = "<<calcavg(testvals,size);
	cout<<"\nVariance = "<<variance(testvals,size,avg);
	
	return 0;
}

double calcavg(double testvals[],int size)
{
	int i;
	double sum=0;
	double avg;
	for(i=0;i<size;i++)
	{
		sum+=testvals[i];
		avg=sum/size;
	}
	
	return avg;
}

double variance(double testvals[],int size,double avg)
{
	double var,sq,total=0;
	double diff;
	for(int i=0;i<size;i++)
	{
		diff=testvals[i]-avg;
		sq=diff*diff;
		total+=sq;
		var=total/size;
	}
	
	return var;
}