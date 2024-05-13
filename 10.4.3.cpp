#include <iostream>
using namespace std;
int main() {
	int num1, num2, result1, result2;
	cout << "Enter two integer values : ";
	cin>>num1>>num2;
	result1=num1<<num2;
	result2=num1>>num2;
	cout << "Bitwise Left shift result = " << result1 << "\n";
	cout << "Bitwise Right shift result = " << result2 << "\n";
}
