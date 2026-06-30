#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int i,j,score,sum,total_sum;
	float avg,total_avg;
	for(i=1;i<=5;i++)
	{
		cout<<"\nEnter score of bowler "<<i<<": \n";
		sum = 0;
		total_sum = 0;
		total_avg = 0;
		for(j=1;j<=3;j++)
		{
			cout<<"\n";
			cin>>score;
			sum+=score;
			avg=sum/3;
			total_sum+=avg;
			total_avg = total_sum/5;
		}
		cout<<"\nAverage score of bowler "<<i<<" = "<<fixed<<setprecision(2)<<avg<<"\n";
	}
	cout<<"----------------------------------------";
	cout<<"\nAverage Team Score = "<<total_avg<<"\n";
	
	return 0;
}
