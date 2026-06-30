#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float M,X,L,W;
	cout<<"Enter weight of the object: ";
	cin>>W;
	cout<<"Enter the length of the beam: ";
	cin>>L;
	cout<<"Enter the distance of one end of beam: ";
	cin>>X;
	M = X * W * (L - X) / L;
	cout<<"Maximum Bending Moment = "<<M;
	
	return 0;
}