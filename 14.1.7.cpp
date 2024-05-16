#include <iostream>



using namespace std;



int main() {

	    int hour;

	    cout << "Enter hour : ";

	    cin >> hour;



	    if (hour >= 0 && hour <= 11) {

			        cout << "AM\n";

		} else if (hour >= 12 && hour <= 23) {

			        cout << "PM\n";

		} else {

			        cout << "Invalid Hour!!\n";

		}



	    return 0;

}
