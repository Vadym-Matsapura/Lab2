#include<iostream>
using namespace std;

int main(){
	int minutes=0, hours=0;
	cout<<"Minutes>> ";
	cin>>minutes;
	
	while(minutes-60 >= 0){
		hours++;
		minutes-=60;
	}
	
	cout<<"\n\nTime is "<<hours<<" hours "<<minutes<<" minutes";
	
	cout<<"\n\n\n";
	return 0;
}
