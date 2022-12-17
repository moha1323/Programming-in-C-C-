#include <iostream>
#include "myHeader.h"
using namespace std;

int main() {
	cout << treadmillExercise(5) << " calories are burned after a 5 minute run on a treadmill." << endl;
	cout << treadmillExercise(10) << " calories are burned after a 10 minute run on a treadmill." << endl;
	cout << treadmillExercise(15) << " calories are burned after a 15 minute run on a treadmill." << endl;
	cout << treadmillExercise(20) << " calories are burned after a 20 minute run on a treadmill." << endl;
	cout << treadmillExercise(25) << " calories are burned after a 25 minute run on a treadmill." << endl;
	cout << treadmillExercise(30) << " calories are burned after a 30 minute run on a treadmill." << endl;

	bool gameWon = false;
	int guess;
	do {
		cout << "Guess a number between 1 and 100 >> ";
		cin >> guess;
		int gameOutcome = randomGame(guess);
		if (gameOutcome == 1) {
			cout << "Congratulations. You figured out my number." << endl;
			gameWon = true;
		} else if (gameOutcome == 2) {
			cout << "Too high. Try again." << endl;
		} else if (gameOutcome == 3) {
			cout << "Too low. Try again." << endl;
		}

	} while (gameWon == false);

	cin.get();
	return 0;
}