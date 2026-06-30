/*(Program) Write a program that declares three one-dimensional arrays named miles, 
gallons, and mpg. Each array should be capable of holding 10 elements. In the miles array, 
store the numbers 240.5, 300.0, 189.6, 310.6, 280.7, 216.9, 199.4, 160.3, 177.4, and 192.3. In the 
gallons array, store the numbers 10.3, 15.6, 8.7, 14, 16.3, 15.7, 14.9, 10.7, 8.3, and 8.4. Each 
element of the mpg array should be calculated as the corresponding element of the miles array 
divided by the equivalent element of the gallons array: for example, mpg[0] = miles[0] /gallons[0].
Use pointers when calculating and displaying the elements of the mpg array. */

#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

int main()
{
	int i,size=10;
	double miles[size]={240.5,300.0,189.6,310.6,280.7,216.9,199.4,160.3,177.4,192.3};
	double gallons[size]={10.3,15.6,8.7,14,16.3,15.7,14.9,10.7,8.3,8.4};
	double mpg[size];
	double* calcPt=mpg;
	cout<<"\nMiles: [ ";
	for(i=0;i<size;i++)
	{
		cout<<miles[i]<<"  ";
	}
	cout<<"]\n";
	cout<<"\nGallons: [ ";
	for(i=0;i<size;i++)
	{
		cout<<gallons[i]<<"  ";
	}
	cout<<"]\n";
	cout<<"\nMPG: [ ";
	for(i=0;i<size;i++)
	{
		mpg[i]=miles[i]/gallons[i];
		cout<<fixed<<setprecision(2)<<*(calcPt+i)<<"  ";
	}
	cout<<"]\n";
	
	return 0;
}