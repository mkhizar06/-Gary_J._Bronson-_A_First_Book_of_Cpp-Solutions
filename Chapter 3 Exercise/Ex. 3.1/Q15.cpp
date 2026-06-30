#include<iostream>

using namespace std;

//Calculating Sum of Numbers From 1 to 100.

int main()
{
	int a,d,n,sum;
   cout<<"Enter 1st number of sequence: ";
   cin>>a;
   cout<<"Enter difference between the numbers: ";
   cin>>d;
   cout<<"Enter number of terms to be added: ";
   cin>>n; 
   
	sum = (n/2)*(2*a+(n-1)*d);
	
	cout<<"a = 1\n"<<"d = 1\n"<<"n = 100\n"<<"Sum = "<<sum;
	
	return 0;
}