#include <iostream>
using namespace std;
int main()
{
	int age;
	cout << "Enter age : ";
	cin>>age;
	int ticketPrice;
	if(age < 3){
		ticketPrice = 0;
	} else if( age >=4 && age <=13){
		ticketPrice = 5;
	} else if(age >=14 && age<=59){
		ticketPrice = 10;
	} else if(age >=60 && age <=99){
		ticketPrice = 5;
	} else {
		ticketPrice = 0;
	}
	cout << "Ticket Price: "<< ticketPrice<< endl;

	return 0;
}
