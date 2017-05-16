//Michael Cullimore
//CS1410 - Brinkerhoff
//Lab1 - Cone

#include <iostream>
using namespace std;

int main () {
	double V, S, r, h;
	double pi = 3.141592653589793;

	cout << "==**==** Lab 1 - Cone **==**==\n";
	cout << "This program calculates the volume and surface area of a cone.\n\n";

	cout << "Enter the radius of cone: ";
	cin >> r; cout << "\n";

	cout << "Enter the height of the cone: ";
	cin >> h; cout << "\n";

	V = (1.0 / 3.0)*pi*(r*r)*h;

	cout << "V = (1/3)pi(" << r << "^2)" << h << "\n";
	cout << "The volume of the cone is " << V << "\n";



	system ("pause");
	return 0;
}