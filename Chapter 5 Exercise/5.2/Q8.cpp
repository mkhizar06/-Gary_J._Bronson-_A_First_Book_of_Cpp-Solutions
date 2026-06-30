#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	float celsius,fahrenheit,i;
	int n_c,count;
	count = 1;
	cout<<"Enter starting celsius value: ";
	cin>>celsius;
	cout<<"\nEnter the no. of conversions you want to make: ";
	cin>>n_c;
	cout<<"\nEnter the increment between celsius values: ";
	cin>>i;
	cout<<"\nCelsius Value:"<<"\t"<<"Fahrenheit:\n";
	while(count<=n_c)
	{
		fahrenheit = (9/5)*celsius+32;
		cout<<"\n";
		cout<<" "<<celsius<<"\t\t  "<<fahrenheit<<"\n";
		celsius+=i;
		count++;
	}
	
	return 0;
}