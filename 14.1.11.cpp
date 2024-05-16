#include <iostream>



using namespace std;



int main() {

	    int age1, age2, age3, age4;

	    cout << "Enter four members age : ";

	    cin >> age1 >> age2 >> age3 >> age4;



	    int count = 0;

	    if (age1 > 60) {

			        count++;

		}

	    if (age2 > 60) {

			        count++;

		}

	    if (age3 > 60) {

			        count++;

		}

	    if (age4 > 60) {

			        count++;

		}
cout << count << endl;



	    return 0;

}
