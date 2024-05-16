#include <iostream>



using namespace std;



int main() {

	    int num1, num2;

	    cout << "Enter 2 integer values : ";

	    cin >> num1 >> num2;



	    if (num1 < 0 && num2 < 0) {

			        cout << "negative\n";

		} else if (num1 > 0 && num2 > 0) {

			        cout << "positive\n";

		} else {

			        cout << "mixed\n";

		}



	    return 0;

}
