//Michael Cullimore
//CS1410 - Brinkerhoff
//Lab1 - Cone

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

int main () {
	double V, S, r, h;
	double pi = 3.141592653589793;

	cout << "==**==** Lab 1 - Cone **==**==\n";
	cout << "This program calculates the volume and surface area of a right cone.\n\n";

	cout << "Enter the radius of cone: ";
	cin >> r; cout << "\n";

	cout << "Enter the height of the cone: ";
	cin >> h; cout << "\n";

	V = (1.0 / 3.0) * pi * (r * r) * h;

	cout << "V = (1/3)pi(" << r << "^2)" << h << "\n";
	cout << "The volume of the cone is " << V << "\n";

	S = pi * (r * r) + pi * r * sqrt((r * r) + (h * h));

	cout << "S =  pi(" << r << "^2)+ pi * " << r << " * sqrt((" << r << "^2)+(" << h << "^2)\n";
	cout << "The surface area of the cone is " << S << "\n";

	return 0;
}