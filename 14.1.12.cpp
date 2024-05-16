#include <iostream>

#include <cmath>



using namespace std;



int main() {

	    int num1, num2;

	    cout << "Enter two integer values : ";

	    cin >> num1 >> num2;



	    int diff1 = abs(100 - num1);

	    int diff2 = abs(100 - num2);



	    if (diff1 < diff2) {

			        cout << num1 << endl;

		} else {

			        cout << num2 << endl;

		}



	    return 0;

}
