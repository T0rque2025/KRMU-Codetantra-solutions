#include <iostream>



using namespace std;



int main() {

	    int num1, num2;

	    char op;



	    cout << "Enter two integer values : ";

	    cin >> num1 >> num2;
cout << "Enter an arithmetic operator : ";

	    cin >> op;



	    switch(op) {

			case '+':

			            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

			            break;

			case '-':

			            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;

			            break;

			case '*':

			            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;

			            break;

			case '/':

			            if (num2 != 0)

							                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;

			            else
							                cout << "Error! Division by zero\n";

			            break;

			case '%':
if (num2 != 0)

							                cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;

			            else
							                cout << "Error! Division by zero\n";

			            break;

			default:

			            cout << "Error! Operator is not correct\n";

		}

	    return 0;

}
