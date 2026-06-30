#include<iostream>

using namespace std;

int main()
{
	float elapsed_time,total_distance,average_speed;
	cout<<"Enter total distance in miles: ";
	cin>>total_distance;
	cout<<"Enter average speed in mph: ";
	cin>>average_speed;
	elapsed_time = total_distance/average_speed;
	cout<<"Elapsed time = "<<elapsed_time<<" minutes";
	
	return 0;
}