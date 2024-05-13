#include <iostream>
using namespace std;
int main() {
	int marks, pass_marks = 50;
	cout << "Enter marks : ";
	cin>>marks;
	( marks>pass_marks ) ? cout << "Passed C++ exam\n" : cout << "Failed C++ exam\n";
	// If marks is greaterthan pass_marks then print "Passed C++ exam" otherwise print "Failed C++ exam"
}
