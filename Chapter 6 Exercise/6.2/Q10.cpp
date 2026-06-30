/* (Program) a. Write a function named ReadOneChar() that reads a key pressed on the keyboard
    and displays the integer code of the entered character. */

#include<iostream>
#include<cmath>

using namespace std;

void ReadOneChar(char);
void ReadOneChar(char ch)
{
	cout<<"\nValue of "<<ch<<" = "<<int(ch);
}

int main()
{
	char cha;
   cout<<"\nEnter a character from keyboard: ";
   cin>>cha;
   ReadOneChar(cha);
   
   return 0;
}