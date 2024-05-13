#include <iostream>
int sum(int, int);

int sub(int, int);

int mul(int, int);

float division(int, int);

int main() {

	    int a, b;

	    cout << "Enter two integer values : ";

	    cin >> a >> b;

	    cout << "Addition of two values = " << sum(a, b) << endl;

	    cout << "Subtraction of two values = " << sub(a, b) << endl;

	    cout << "Multiplication of two values = " << mul(a, b) << endl;

	    cout << "Division of two values = " << division(a, b) << endl;



	    return 0;

}
int sum(int x, int y) {

	    int result = x + y;

	    return result;

}



int sub(int x, int y) {

	    int result = x - y;

	    return result;

}



int mul(int x, int y) {

	    int result = x * y;

	    return result;

}



float division(int x, int y) {

	    float result = static_cast<float>(x) / y;

	    return result;

}
