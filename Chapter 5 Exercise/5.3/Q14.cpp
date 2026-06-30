#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	float sales,profit,loss,a_profit;
	sales = 1000000;
	profit = 1000000;
	loss = sales*0.04;
	int years;
	float tsales=0;
	float tprofit = 0;
	cout<<"\n\t\tSALES AND PROFIT PROJECTION\n";
	cout<<"\t\t----------------------------\n\n";
	cout<<"YEAR"<<"\t\t"<<"EXPECTED SALES"<<"\t\t"<<"PROJECTED PROFIT";
	cout<<"\n---"<<"\t\t"<<"--------------"<<"\t\t"<<"-----------------\n";
	for(years=1;years<=10;years++)
	{
		cout<<"\n"<<years<<"\t\t"<<fixed<<setprecision(2)<<fixed<<setprecision(2)<<sales<<"\t\t"<<profit<<"\n";
		sales -= loss;
		a_profit = loss*1;
		profit -= a_profit;
		tsales += sales;
		tsales++;
		tprofit += profit;
		tprofit++;
		
	}
	cout<<"\n------------------------------------------------------------\n";
	cout<<"Totals:\t\t $"<<tsales<<"\t\t"<<"$"<<tprofit<<"\n";
	
	return 0;
}
