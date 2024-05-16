#include <iostream>



using namespace std;



int main() {

	    int num1, num2;

	    cout << "Enter two integers : ";

	    cin >> num1 >> num2;



	    bool is_multiple = (num1 % num2 == 0);



	    cout << boolalpha << is_multiple << endl;



	    return 0;

}
