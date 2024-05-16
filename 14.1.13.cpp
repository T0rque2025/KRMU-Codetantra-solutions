#include <iostream>



using namespace std;



int main() {

	    int num1, num2;

	    cout << "Enter two integer values : ";

	    cin >> num1 >> num2;



	    // Extract the last digit of each number

	    int last_digit1 = num1 % 10;

	    int last_digit2 = num2 % 10;



	    // Check if the last digits are equal

	    bool result = (last_digit1 == last_digit2);



	    // Output the result

	    cout << boolalpha << result << endl;



	    return 0;

}
