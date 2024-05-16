#include <iostream>



using namespace std;



int main() {

	    int num1, num2;

	    cout << "Enter two numbers : ";

	    cin >> num1 >> num2;



	    int sum;

	    if (num1 != num2) {

			        sum = num1 + num2;

		} else {

			        sum = (num1 + num2) * 2;

		}



	    cout << sum << endl;



	    return 0;

}
