/*  (Program) A model to estimate the number of grams of a radioactive isotope left after t years 
is given by this formula:

remaining material = (original material) e-0.00012t

Using this formula, write, compile, and run a C++ program to determine the amount of 
radioactive material remaining after 1000 years, assuming an initial amount of 100 grams. 
Verify the display your program produces by using a hand calculation. After verifying that 
your program is working correctly, use it to determine the amount of radioactive material 
remaining after 275 years, assuming an initial amount of 250 grams. */
 
 
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	/* float r_material,o_material;
	int t=1000;
	o_material = 100;
	r_material = o_material*(exp(-0.00012*t));
	cout<<"\nRemaining Radioactive Element = "<<fixed<<setprecision(1)<<r_material<<" g\n"; */
	
	float r_material,o_material;
	int t=275;
	o_material = 250;
	r_material = o_material*(exp(-0.00012*t));
	cout<<"\nRemaining Radioactive Element = "<<fixed<<setprecision(1)<<r_material<<" g\n";
	
	
	
	return 0;
}