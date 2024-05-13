#include <iostream>
#include <iomanip>
using namespace std;
int main(){
double a,b;
	cout<<"Enter d1, d2 : ";
	cin>>a>>b;
	cout<<setprecision(6)<<scientific;
	cout<<"Addition = "<<a+b<<endl;
	cout<<"Subtraction = "<<a-b<<endl;
	cout<<"Multiplication = "<<a*b<<endl;
	cout<<"Division = "<<a/b<<endl;
}
