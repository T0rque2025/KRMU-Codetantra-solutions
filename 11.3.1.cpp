#include <iostream>

#include <cmath>

using namespace std;

int main() {

	    double principal, time, rate;

	    cout << "Enter the principal amount, time, rate of interest : ";

	    cin >> principal >> time >> rate;

	    double simpleInterest = (principal * time * rate) / 100;

	    cout << "Simple interest : " << simpleInterest << endl;

	    double compoundInterest = principal * pow(1 + rate/100, time);

	    cout << "Compound interest : " << compoundInterest << endl;

	    return 0;

}
