#include <iostream>

using namespace std;

int main() {

	    int marks[6];

	    float total = 0;
	    cout << "Enter 6 subjects marks of a student : ";

	    for (int i = 0; i < 6; ++i) {

			        cin >> marks[i];

			        total += marks[i];
float percentage = total / 6;

	    if (percentage > 60) {

			        cout << "Student secured a first class with " << percentage << "%" << endl;

		} else {
			        cout << "Student did not secure a first class with " << percentage << "%" << endl;
}

	    cout << endl;
	    return 0;
}
