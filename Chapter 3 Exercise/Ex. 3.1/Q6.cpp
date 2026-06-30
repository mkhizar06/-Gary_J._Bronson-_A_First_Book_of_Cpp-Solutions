#include<iostream>

using namespace std;

int main()
{
	int v,a,d,n;
	cout<<"Enter 1st term of sequence: ";
	cin>>a;
	cout<<"\n a = "<<a;
	cout<<"\n\nEnter nth term of sequence: ";
	cin>>n;
	cout<<"\n nth term = "<<n;
	cout<<"\n\nEnter common difference: ";
	cin>>d;
	cout<<"\n d = "<<d;
	v = a+(n-1)*d;
	cout<<"\n\nHence, \n\n v = "<<v<<" Answer.";
	
	return 0;
}