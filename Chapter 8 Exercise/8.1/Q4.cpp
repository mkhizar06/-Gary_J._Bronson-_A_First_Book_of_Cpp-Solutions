/* (Practice) a. Write a C++ program that includes the following declaration statements. Have 
the program use the address operator and a cout statement to display the addresses corresponding to each variable:
int num,count;
long date;
float slope;
double yield;  */

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	int* num,count;
	long* date;
	float* slope;
	double* yield;
	cout<<&num<<endl;
	cout<<&count<<endl;
	cout<<&date<<endl;
	cout<<&slope<<endl;
	cout<<&yield<<endl;
}