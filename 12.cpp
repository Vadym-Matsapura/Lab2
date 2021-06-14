#include<iostream>
using namespace std;

int main(){
	int a;
	cout << "Enter your number:";
	cin >> a;
	cout<<"\n";

	for(int i=0; i<4; i++){
		cout<<a%10;
		a/=10;
	}
	
	return 0;
}
