#include <iostream>
using namespace std;
int main() {
	int num1, num2, result;
	cout << "Enter two integer values : ";
	cin>>num1>>num2;
	result=num1&num2;
	cout << "Bitwise AND result = " << result << "\n";
}
