#include <iostream>

#include <cmath>

using namespace std;

int main() {

	    double a, b, c;

	    cout << "Enter coefficients a, b and c : ";

	    cin >> a >> b >> c;

	    double discriminant = b * b - 4 * a * c;

	    if (discriminant > 0) {

			        double root1 = (-b + sqrt(discriminant)) / (2 * a);

			        double root2 = (-b - sqrt(discriminant)) / (2 * a);

			        cout << "root1 = " << root1 << " and root2 = " << root2 << "\n";

		} else if (discriminant == 0) {

			        double root = -b / (2 * a);

			        cout << "root1 = root2 = " << root << "\n";

		} else {

			        cout << "Roots are imaginary\n";
}

	    return 0;
}
