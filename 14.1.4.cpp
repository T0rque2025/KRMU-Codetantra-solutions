#include <iostream>



using namespace std;



int main() {

	    int num1, num2;

	    cout << "Enter two integers : ";

	    cin >> num1 >> num2;



	    // Check if one of the numbers is 100 or the sum is 100

	    bool result = (num1 == 100 || num2 == 100 || num1 + num2 == 100);



	    // Output the result

	    cout << boolalpha << result << endl;



	    return 0;

}
