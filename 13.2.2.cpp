#include <iostream>

#include <string>

using namespace std;

int main() {

	    int number;

	    cout << "Enter a number : ";

	    cin >> number;

	    if (number < 1 || number > 10) {

			        cout << number << " is not in the range 1 to 10\n";

		} else {

			        string numbers[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten"};

			        cout << numbers[number] << endl;

		}
	    return 0;
}
