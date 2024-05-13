#include <iostream>
using namespace std;
int a=99;
void fun(){
	static int b=10;
	cout<<"The static value : "<<b<<endl;
	b++;
	a++;
}
void func(int& c){
	cout<<"The auto value : "<<c<<endl;
	a++;
}
int main(){
	int c;
	cout<<"Enter a value : ";
	cin>>c;
	for(int i=0;i<3;i++){
		fun();
	}
	for(int i=0;i<3;i++){
		func(c);
	}
	cout<<"Global variable value : "<<a<<endl;
	cout<<"Local variable value : "<<c<<endl;
}
