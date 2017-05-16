//Michael Cullimore
//CS1410 - Brinkerhoff
//Lab1 - Roots

#include <cmath>
#include <conio.h>
#include <iostream>

using namespace std;

int main () {
	double a, b, c, d, x1, x2;

	cout << "===***===*** Lab 1 - Roots ***===***===\n";
	cout << "A quadratic equation is given as ax^2 + bx + c = 0.\nThis program gives roots for quadratics.\n";

	cout << "Enter a number for a: ";
	cin >> a; cout << "\n";

	cout << "Enter a number for b: ";
	cin >> b; cout << "\n";

	cout << "Enter a number for c: ";
	cin >> c; cout << "\n";

	d = (b*b) - (4 * a*c);

	if (d >= 0) {
		x1 = (-b + sqrt (d)) / (2 * a);
		x2 = (-b - sqrt (d)) / (2 * a);

		cout << "(" << a << ")x^2+(" << b << ")x+(" << c << ")\n";
		cout << "The roots of the quadratic equation are x1 = " << x1 << " and x2 = " << x2 <<"\n";
	}
	else {
		d = d * (-1);

		cout << "(" << a << ")x^2+(" << b << ")x+(" << c << ")\n";
		cout << "These roots are imaginary!\n";
		cout << "The roots of the quadratic equation are x1 = " << (-b / (2 * a)) << " + " << (sqrt (d) / (2 * a)) << "i and x2 = " << (-b / (2 * a)) << " - " << (sqrt (d) / (2 * a)) << "\n";
	}

	system ("pause");
	return 0;
}