#include <iostream>



using namespace std;



int main() {

	    double gpa;

	    cout << "Enter gpa between 0.0 and 5.0 : ";

	    cin >> gpa;



	    if (gpa >= 0.0 && gpa <= 5.0) {

			        if (gpa >= 4.5)

						            cout << "Grade: A\n";

			        else if (gpa >= 3.5)

						            cout << "Grade: B\n";

			        else if (gpa >= 2.5)

						            cout << "Grade: C\n"; // Additional condition

			        else if (gpa >= 1.5)

						            cout << "Grade: D\n"; // Additional condition

			        else

						            cout << "Grade: E\n";

		} else {

			        cout << "Please enter GPA in between 0.0 and 5.0\n"; // Additional condition

		}



	    return 0;

}
