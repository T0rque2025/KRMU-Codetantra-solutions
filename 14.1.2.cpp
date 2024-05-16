#include <iostream>
using namespace std;

int main(){
	int first_number,second_number,x;
	cout<<"Enter 2 integer values : ";
	cin>>first_number>>second_number;
	x=first_number-second_number;
	if(x>= -25 && x< 25){
		cout<< x*2 <<"\n";
	}else{
		cout<<x<<"\n";
	}
}
