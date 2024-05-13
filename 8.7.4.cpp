#include <iostream>
using namespace std;
int main() {
	enum state {working = 1, failed = 0, freezed = 0};
	cout << working << " " << failed << " " << freezed << "\n";
}
