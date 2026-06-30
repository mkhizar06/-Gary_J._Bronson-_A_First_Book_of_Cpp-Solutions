#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	char grade;
	cout<<"Enter a grade letter [A to D]: ";
	cin>>grade;
	switch(grade)
	{
		case 'A':
			cout<<"The numerical grade is between 90 and 100\n";break;
		case 'B':
			cout<<"The numerical grade is between 80 and 89.9\n";break;
		case 'C':
			cout<<"The numerical grade is between 70 and 79.9";break;
		case 'D':
			cout<<"How are you going to explain this one?\n";break;
		default:
			cout<<"Of course I had nothing to do with my grade.\n";
			cout<<"It must have been the professor's fault.\n";
	}
	
	return 0;
}