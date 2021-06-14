#include<iostream>
using namespace std;

int main(){
	float r=0, h=0, s=0;
	
	cout<<"Enter r>> ";
	cin>>r;
	cout<<"Enter h>> ";
	cin>>h;

	s = 3.14 * r * r * h;
	s/=3;
	
	cout<<"\n\n\nS = "<<s<<"\n\n\n";
	
	system("pause");
	return 0;
}
