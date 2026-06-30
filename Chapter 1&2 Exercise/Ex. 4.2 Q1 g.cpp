#include<iostream>

using namespace std;

int main()
{
    float diff,temp1,temp2,error,factor;
    factor = 4;
    cout<<"Enter temperature 1: ";
    cin>>temp1;
    cout<<"Enter temperature 2: ";
    cin>>temp2;
    diff = (temp1-temp2);
    if(diff>2.3)
    {
    	error = (temp1 - temp2)*factor;
    	cout<<"Error = "<<error;
	}
	
	return 0;
}
