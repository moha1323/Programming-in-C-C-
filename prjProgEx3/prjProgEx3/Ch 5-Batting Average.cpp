#include "myHeader.h"
#include <iostream>
using namespace std;

double battingAvg() {
	int hits,
		atBat;
	cout << "Batting Average Calculator\n";
	cout << "How many hits have you done?" << endl;
	cin >> hits;
	cout << "How many times have you beeen at bat?" << endl;
	cin >> atBat;
	cin.get();
	return (double)hits / atBat;
}