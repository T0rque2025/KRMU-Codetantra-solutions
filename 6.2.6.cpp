#include <iostream>

using namespace std;

float sum(float, float);

float sub(float, float);

float mul(float, float);

float div(float, float);

int main() {

	    float a, b;
	    cout << "Enter two values : ";

	    cin >> a >> b;
	    cout << "Addition of two values = " << sum(a, b) << endl;

	    cout << "Subtraction of two values = " << sub(a, b) << endl;

	    cout << "multiplication of two values = " << mul(a, b) << endl;

	    cout << "division of two values = " << div(a, b) << endl;



	    return 0;
}

float sum(float x, float y) {

	    return x + y;

}
float sub(float x, float y) {

	    return x - y;

}

float mul(float x, float y) {

	    return x * y;

}

float div(float x, float y) {

	    if (y != 0) {

			        return x / y;

		} else {

			        cout << "Error: Division by zero!" << endl;

			        return 0.0;

		}

}
