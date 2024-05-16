#include <iostream>
using namespace std;
int main()
{
	double a;
	cout << "Enter amount : ";
	cin>>a;
	if(30001<=a){
		cout<< "Commission = "<<a*15/100<<endl;
	}
	else if(20001<=a && a<=30000){
		cout<< "Commission = "<<a*10/100<<endl;
	}
	else if(10001<=a && a<=20000){
		cout<< "Commission = "<<a*7/100<<endl;
	}
	else if(5001<=a && a<=10000){
		cout<< "Commission = "<<a*3/100<<endl;
	}
	else if(1<=a && a<=5000){
		cout<< "Commission = "<<a*0/100<<endl;
	}
return 0;
}
