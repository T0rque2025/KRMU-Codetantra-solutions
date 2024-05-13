#include <iostream>
using namespace std;
int main() {
	int num;
	cout << "Enter an integer value : ";
	cin>>num;
	(num&1) ? cout << num << " is an odd number\n" : cout << num << " is an even number\n";
	return 0;
}
