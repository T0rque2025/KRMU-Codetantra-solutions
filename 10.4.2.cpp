#include <iostream>
using namespace std;
int main() {
	int num1, num2, result1, result2;
	cout << "Enter two integer values : ";
    cin>>num1>>num2;
	result1=num1|num2;
	result2=num1^num2;
	cout << "Bitwise OR result = " << result1 << "\n";
	cout << "Bitwise XOR result = " << result2 << "\n";
}
