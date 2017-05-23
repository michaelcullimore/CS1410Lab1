//Michael Cullimore
//CS1410 - Brinkerhoff
//Lab2 - Guess

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main () {
	int num, guess;
	int tries = 0;

	srand ((unsigned)time (NULL));
	num = rand () % 100;

	cout << "==**==**== Lab2 - Guess==**==**==\n";
	cout << "Welcome to the Number Guessing Game!\n";
	cout << "Guess the random number between 0 and 99! (Enter -1 to exit)" << endl;
	
	do {
		cout << "Enter a number from 0 to 99: "; cin >> guess; cout << endl;
		tries++;
		if (guess == -1)
			exit (0);
		if (guess > num)
			cout << "Too high\n\n";
		else if (guess < num)
			cout << "Too Low\n\n";
		else
			cout << "You got it! You guessed it in " << tries << " guesses! Thanks for playing\n\n";
	}while (guess != num);

	//system ("pause");
	return 0;
}