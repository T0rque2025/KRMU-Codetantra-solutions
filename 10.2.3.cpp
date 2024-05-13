#include <iostream>
using namespace std;
int main() {
	cout << "Enter x, y and z : ";
	int x, y, z;
	cin >> x >> y >> z;
	// Add x and y and store the result in x
	x=x+y;
	cout << "x = " << x<< endl; // print  x
	// Multiply y with 2 and store the result in y
	y=y+y;
	cout << "y = " << y<< endl; // print y
	// Divide z with 5 and store result in z
	z/=5;
	cout << "z = " << z << endl; // print z
	// Divide x with 7 using modulo division
	x%=7;
	cout << "x = " << x << endl; // print x
}
