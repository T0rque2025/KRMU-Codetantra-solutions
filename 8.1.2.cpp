#include <iostream>
#include <iomanip>
using namespace std;
int main(){
float a,b;
cout<< "Enter two float values : " ;
	cin>>a>>b;
	float c=b/a;
	cout<<"Division result in fixed form = "<<fixed<<setprecision(5)<<c<<endl;
	cout<<fixed<<setprecision(6)<<scientific;
	cout<<"Division result in scientific form = "<<c<<endl;
}
