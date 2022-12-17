#include "myHeader.h"
#include <iostream>
using namespace std;

double treadmillExercise(int duration) {
	double caloriesBurned;
	int min = 0;
	for (int num = 0; num < duration; num++) {
		min++;
		caloriesBurned = 3.9 * min;
	}
	return caloriesBurned;
}