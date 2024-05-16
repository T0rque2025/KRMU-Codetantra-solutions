#include <iostream>
	using namespace std;

	int main() {

		    char ch;
		    cout << "Enter a character : ";

		    cin >> ch;
		    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {

				        cout << ch << " is an alphabet" << endl;

			} else if (ch >= '0' && ch <= '9') {

				        cout << ch << " is a digit" << endl;

			} else {

				        cout << ch << " is neither an alphabet nor a digit" << endl;
			}

		    return 0;
	}

