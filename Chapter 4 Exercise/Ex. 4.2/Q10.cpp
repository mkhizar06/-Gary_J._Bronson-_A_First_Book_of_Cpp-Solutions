#include<iostream>

using namespace std;

int main()
{
	//weight class = w_class & registration fee = r_fee
	
	float model,weight,w_class,r_fee;
	cout<<"Enter model year of the car: ";
	cin>>model;
	cout<<"Enter weight of the car: ";
	cin>>weight;
	if(model<=1990 && weight<2700)
	{
		w_class = 1;
		r_fee = 26.50;
		cout<<"The weight class of car is: "<<w_class<<"\n";
		cout<<"The registration fee of car is: "<<r_fee<<" PKR";
	}
	else if((model<=1990) && (weight>=2700 && weight<=3800))
	{
		w_class = 2;
		r_fee = 35.50;
		cout<<"The weight class of car is: "<<w_class<<"\n";
		cout<<"The registration fee of car is: "<<r_fee<<" PKR";
	}
	else if(model<=1990 && weight>3800)
	{
		w_class = 3;
		r_fee = 56.50;
		cout<<"The weight class of car is: "<<w_class<<"\n";
		cout<<"The registration fee of car is: "<<r_fee<<" PKR";
	}
	else if((model>=1991 && model<=1999) && (weight<2700))
	{
		w_class = 4;
		r_fee = 35.00;
		cout<<"The weight class of car is: "<<w_class<<"\n";
		cout<<"The registration fee of car is: "<<r_fee<<" PKR";
	}
	else if((model>=1991 && model<=1999) && (weight>=2700 && weight<=3800))
	{
		w_class = 5;
		r_fee = 45.50;
		cout<<"The weight class of car is: "<<w_class<<"\n";
		cout<<"The registration fee of car is: "<<r_fee<<" PKR";
	}
	else if((model>=1991 && model<=1999) && (weight>3800))
	{
		w_class = 6;
		r_fee = 62.50;
		cout<<"The weight class of car is: "<<w_class<<"\n";
		cout<<"The registration fee of car is: "<<r_fee<<" PKR";
	}
	else if(model>=2000 && weight<3500)
	{
		w_class = 7;
		r_fee = 49.50;
		cout<<"The weight class of car is: "<<w_class<<"\n";
		cout<<"The registration fee of car is: "<<r_fee<<" PKR";
	}
	else if(model>=2000 && weight>=3500)
	{
		w_class = 8;
		r_fee = 62.50;
		cout<<"The weight class of car is: "<<w_class<<"\n";
		cout<<"The registration fee of car is: "<<r_fee<<" PKR";
	}
	
	return 0;
}