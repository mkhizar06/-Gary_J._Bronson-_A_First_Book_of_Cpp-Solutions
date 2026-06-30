#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float temp_in_fahrenheit,temp_in_celsius;
	cout<<"Enter temperature in Fahrenheit: ";
	cin>>temp_in_fahrenheit;
	temp_in_celsius = (5.0/9.0)*(temp_in_fahrenheit-32);
	cout<<"Temperature in Celsius = "<<temp_in_celsius;
	
	return 0;
}