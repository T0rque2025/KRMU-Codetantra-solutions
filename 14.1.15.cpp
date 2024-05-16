#include <iostream>



using namespace std;



int main() {

	    char gender;

	    cout << "Enter gender : ";

	    cin >> gender;



	    switch (toupper(gender)) {

			case 'M':

			            cout << "Male\n";

			            break;

			case 'F':

			            cout << "Female\n";

			            break;

			default:

			            cout << "Unknown gender\n";

			            break;

		}



	    return 0;

}
