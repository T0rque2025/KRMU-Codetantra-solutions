#include <iostream>

using namespace std;

int main() {

	    char ch;
	    cout << "Enter any character : ";

	    cin >> ch;
	    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {

			        cout << ch << " is an alphabet\n";

		} else {

			        cout << ch << " is not an alphabet\n";
		}

	    cout << endl;
	    return 0;
}
