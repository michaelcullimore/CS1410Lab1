//Michael Cullimore
//CS1410 - Brinkerhoff
//Lab2 - Roots2

#include <cmath>
#include <conio.h>
#include <iostream>

using namespace std;

int main () {
	double a, b, c, discriminant, x1, x2;

	cout << "===***===*** Lab 2 - Roots2 ***===***===\n";
	cout << "A quadratic equation is given as ax ^ 2 + bx + c = 0.\n";
	cout << "The quadratic function is given as (-b +- (sqrt(b^2 + 4ac))) / (2a)\n";
	cout << "This program gives roots for quadratics.\n\n";

	cout << "Enter a number for a (as long as a !=0): ";
	cin >> a; cout << "\n";

	if (a == 0) {
		cout << "Error. Closing program. Please go home rethink your life, then come back and try again.\n";
		exit (0);
	}

	cout << "Enter a number for b: ";
	cin >> b; cout << "\n";

	cout << "Enter a number for c: ";
	cin >> c; cout << "\n";

	discriminant = (b*b) - (4 * a*c);

	if (discriminant >= 0) {
		x1 = (-b + sqrt (discriminant)) / (2 * a);
		x2 = (-b - sqrt (discriminant)) / (2 * a);

		cout << "(" << a << ")x^2+(" << b << ")x+(" << c << ")\n";
		cout << "(-" << b << " + -(sqrt (" << b << " ^ 2 + 4" << a << "*" << c << "))) / (2" << a << ")\n";
		cout << "The roots of the quadratic equation are x1 = " << x1 << " and x2 = " << x2 << "\n";
	}
	else {
		discriminant = discriminant * (-1);

		cout << "(" << a << ")x^2+(" << b << ")x+(" << c << ")\n";
		cout << "(-" << b << " + -(sqrt (" << b << " ^ 2 + 4*" << a << "*" << c << "))) / (2" << a << ")\n";
		cout << "These roots are imaginary!\n";
		cout << "The roots of the quadratic equation are x1 = (" << (-b / 2 * a) << " + " << sqrt (discriminant) / (2 * a) << "i) and x2 = (" << (-b / (2 * a)) << " - " << sqrt (discriminant) / (2 * a) << "i)\n\n";
	}

	//system ("pause");
	return 0;
}