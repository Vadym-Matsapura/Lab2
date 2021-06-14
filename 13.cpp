#include<iostream>
using namespace std;

int main(){
	int month=0;
	float sum, per_month;
	
	cout<<"Sum>> ";
	cin>>sum;
	cout<<"Month>> ";
	cin>>month;
	
	per_month = sum*0.05/12;
	cout<<"\n\n+per month: +"<<per_month;
	cout<<"\n+per period: +"<<month * per_month;
	cout<<"\nfinal sum: "<<sum + (month * per_month);
	
	
	cout<<"\n\n\n";
	return 0;
}
