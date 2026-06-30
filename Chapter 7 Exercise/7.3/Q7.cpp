/* (Program) Write, compile, and run a C++ program that declares three one-dimensional arrays 
 named price, quantity, and amount. Each array should be declared in main() and be 
 capable of holding 10 double-precision numbers. The numbers to store in price are 10.62, 
 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, and 3.98. The numbers to store in quantity
 are 4, 8.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, and 4.8. Your program should pass these three arrays to 
 a function named extend(), which should calculate elements in the amount array as the 
 product of the corresponding elements in the price and quantity arrays (for example, 
 amount[1] = (price[1] * quantity[1]). After extend() has passed values to the amount
 array, the values in the array should be displayed from within main(). */
 
#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>

using namespace std;

void extend(double [],double [],double [],int);

int main()
{
	const int size=10;
	double price[size]={10.62,14.89,13.21,16.55,18.62,9.47,6.58,18.32,12.15,3.98};
	double quantity[size]={4,8.5,6,7.35,9,15.3,3,5.4,2.9,4.8};
	double amount[size];
	
	extend(price,quantity,amount,size);
	
	return 0;
}

void extend(double price[],double quantity[],double amount[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		amount[i]=price[i]*quantity[i];
	}
	cout<<"\nAmount Array: [ ";
	for(i=0;i<size;i++)
	{
		cout<<setprecision(2)<<fixed<<amount[i]<<" ";
	}
	cout<<"]\n";
	
}


