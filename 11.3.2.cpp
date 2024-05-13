#include <iostream>
using namespace std;
int main(){
	int a;
	float b;
	cout<<"Distance : ";
	cin>>a;
		if(a<11) b=a*2.45;
	else if(a<21) b=a*1.75;
	else if(a<31) b=a*1.05;
	else b= a*0.90;
	cout<<"Fare : "<<b<<endl;
}
