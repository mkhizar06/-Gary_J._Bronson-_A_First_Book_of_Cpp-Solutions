 /* (Program) Write, compile, and run a C++ program that calculates and returns the fourth root 
of the number 81.0, which is 3. After verifying that your program works correctly, use it to 
determine the fourth root of 1,728.896400. Your program should make use of the sqrt()
function or use the fact that the fourth root of a value can be obtained by raising the value to 
the 1/4 power.*/

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	float num1,num2;
	num1 = 81.0;
	num2 = 1728.896400; 
	cout<<"Fourth root of 81 = "<<sqrt(sqrt(num1))<<"\n";
	cout<<"\nFourth root of 1728.896400  =  "<<sqrt(sqrt(num2))<<"\n";
}