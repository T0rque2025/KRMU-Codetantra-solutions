#include <iostream>
using namespace std;
int main() {
	char aChar = 'A';
	char tabChar = '\t';
	char digitChar = '7';
	char newLineChar = '\n';
	char spaceChar = ' ';
	char hyphenChar = '-';
	char percentageChar = '%';
	cout << "Character = " << aChar << " and ASCII value = " <<static_cast<int>(aChar)  << "\n";
	cout << "Character = " << tabChar << " and ASCII value = " <<static_cast<int>(tabChar)  << "\n";
	cout << "Character = " << digitChar << " and ASCII value = " << static_cast<int>(digitChar) << "\n";
	cout << "Character = " << newLineChar << " and ASCII value = " <<static_cast<int>(newLineChar)  << "\n";
	cout << "Character = " << spaceChar << " and ASCII value = " << static_cast<int>(spaceChar) << "\n";
	cout << "Character = " << hyphenChar << " and ASCII value = " << static_cast<int>(hyphenChar) << "\n";
	cout << "Character = " << percentageChar << " and ASCII value = " << static_cast<int>(percentageChar) << "\n";
}
