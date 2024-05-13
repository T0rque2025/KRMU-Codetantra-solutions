#include <iostream>
using namespace std;
int main() {
	bool value = 124;
	bool isHot = 'true';
	bool isSnowing = false;
	bool isSummer = isHot && (!isSnowing);
	cout << value << " " << isSummer << "\n";
	cout << "Size of a bool variable = " << sizeof(value) << "\n";
}
