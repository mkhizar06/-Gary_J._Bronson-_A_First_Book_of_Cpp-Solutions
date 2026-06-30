/*  (Program) The number of years it takes for an isotope of uranium to decay to one-half an 
original amount is given by this formula, where ?, the decay constant (which is equal to the 
inverse of the mean lifetime), equals 0.00012:

half-life = ln(2) / ?

Using this formula, write, compile, and run a C++ program that calculates and displays the 
half-life of this uranium isotope. Verify the result your program produces by using a hand calculation.
 After verifying that your program is working correctly, use it to determine the half-life 
of a uranium isotope with ? = 0.00026. */
 
 
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	/* const float lambda = 0.00012;
	float half_life;
	half_life = log(2)/lambda;
	cout<<"\nHalf Life = "<<floor(half_life)<<" years\n"; */
	
	const float lambda = 0.00026;
	float half_life;
	half_life = log(2)/lambda;
	cout<<"\nHalf Life of Uranium = "<<floor(half_life)<<" years\n"; 
	
	return 0;
}