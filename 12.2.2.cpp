#include <iostream>
using namespace std;
int main() {

	    float balance;
	    cout << "Enter balance : ";

	    cin >> balance;
	    if (balance < 500) {
			        cout << "Balance is low" << endl;
		} else {

			        cout << "Sufficient balance" << endl;
		}
	    cout << endl;
	    return 0;

}
