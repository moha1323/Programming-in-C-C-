#include "myHeader.h"
#include <iostream>
using namespace std;

int randomGame(int guess) {
 int randomNum = rand() % 100 + 1;
 if (guess == randomNum) {
	 return 1;
 } else if (guess > randomNum) {
	 return 2;
 } else if (guess < randomNum) {
	 return 3;
 }
}

