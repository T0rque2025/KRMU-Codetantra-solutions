#include <iostream>
using namespace std;
int main() {
	char c1 = 'A', c2 = 'D';
	cout << "c1 = " << static_cast<int>(c1) << endl; // Print int value of c1
	cout << "c1 + c2 = " <<static_cast<int>(c1)+static_cast<int>(c2)  << endl; // Print int value of c1 + c2
	cout << "c1 + c2 + 5 = " << static_cast<int>(c1)+static_cast<int>(c2)+5 << endl; // Print int value of c1 + c2 + 5
	cout << "c1 + c2 + '5' = " <<static_cast<int>(c1)+static_cast<int>(c2)+'5'  << endl; // Print int value of c1 + c2 + '5'
}
