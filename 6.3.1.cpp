#include <iostream>

	using namespace std;

	int sum(int);

	int main() {

		    int number;
		    cout << "Enter an integer value : ";
		    cin >> number;
		    cout << "Sum of " << number << " natural numbers = " << sum(number) << endl;
		    return 0;

	}
int sum(int value) {

		    int result = 0;
		    for (int i = 1; i <= value; ++i) {

				        result += i;

			}
		    return result;

	}
