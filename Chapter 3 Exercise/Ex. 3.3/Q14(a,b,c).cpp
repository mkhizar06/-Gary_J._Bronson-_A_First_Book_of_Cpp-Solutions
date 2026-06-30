/* (Program) a. Appendix B lists the integer values corresponding to each letter stored with 
the ASCII code. Note that uppercase letters consist of contiguous codes, starting with an 
integer value of 65 for the letter A and ending with 90 for the letter Z. Similarly, lowercase 
letters begin with the integer value of 97 for the letter a and end with 122 for the letter z. 
With this information as background, determine the character value of the expressions 
char('A'+ 32) and char('Z'+ 32).

b. Using Appendix B, determine the integer value of the expression 'a' - 'A'.

c. Using the results of Exercises 14a and 14b, determine the character value of the following 
expression, where uppercaseƒletter can be any uppercase letter from A to Z: 
char(uppercase letter + 'a' - 'A'). */

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	char upper_case,ch1,ch2,ch3;
	ch1 = 'A';
	ch2 = 'Z';
	ch3 = 'a';
	cout<<"\nCharacter value of ['A' + 32] = "<<int(ch1+32)<<"\n";
	cout<<"\nCharacter value of ['Z' + 32] = "<<int(ch2+32);
	cout<<"\n\nEnter any uppercase letter: ";
	cin>>upper_case;
	cout<<"\nCharacter value of [uppercase letter + 'a' - 'A'] = "<<int(upper_case+ch3-ch1)<<"\n";
	
	
	return 0;
}