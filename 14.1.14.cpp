#include <iostream>

#include <cctype>



using namespace std;



int main() {

	    char ch;

	    cout << "Enter a character : ";

	    cin >> ch;



	    if (isalpha(ch)) {

			        cout << ch << " is an alphabet";

			        switch (toupper(ch)) {

						case 'A':

						case 'E':

						case 'I':

						case 'O':

						case 'U':

						                cout << " and a vowel\n";

						                break;

						default:

						                cout << " and a consonant\n";

						                break;
}

		} else {

			        cout << ch << " is not an alphabet\n";

		}



	    return 0;

}
