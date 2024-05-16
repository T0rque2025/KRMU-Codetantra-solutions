#include <iostream>



using namespace std;



int main() {

	    int num1, num2;

	    cout << "Enter two integer values : ";

	    cin >> num1 >> num2;



	    if ((num1 >= 25 && num1 <= 35) || (num2 >= 25 && num2 <= 35)) {

			        cout << "Within range\n";

		} else {

			        cout << "Out of range\n";

		}



	    return 0;

}
