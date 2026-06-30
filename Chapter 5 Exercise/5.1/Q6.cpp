#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	int initial,depreciation_rate,years,end_of_year,accumulated;
	depreciation_rate = 4000;
	initial = 28000;
	years = 1;
	accumulated = 4000;
	cout<<setw(10)<<"Year"<<setw(20)<<"Depreciation"<<setw(27)<<"End-Of-Year Value"<<"\t"<<"Accumulated Depreciation";
	cout<<"\n      _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n";
	
	while(years<=7 && initial <=28000 && depreciation_rate == 4000 && accumulated<=28000)
	{
		initial -= 4000;
		cout<<"\n"<<setw(8)<<years<<setw(17)<<depreciation_rate<<setw(24)<<initial<<"\t\t\t"<<accumulated;
		accumulated+=4000;
		depreciation_rate = 4000;
		years++;
	}
	return 0;
}