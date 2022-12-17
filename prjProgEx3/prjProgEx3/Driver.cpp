#include "myHeader.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	cout << "Your batting average is " << setprecision(4) << battingAvg();
	
	string month1, month2, month3;
	double rainInch1, rainInch2, rainInch3, avgRainFall;

	cout << "\n\nThe average monthly rainfall for three consecutive months.\n";
	cout << "Please enter the month: ";
	getline(cin, month1);
	cout << "Please enter the month: ";
	getline(cin, month2);
	cout << "Please enter the month: ";
	getline(cin, month3);
	cout << "Please enter the amount rainfall for " << month1 << " in inches: " << endl;
	cin >> rainInch1;
	cout << "Please enter the amount rainfall for " << month2 << " in inches: " << endl;
	cin >> rainInch2;
	cout << "Please enter the amount rainfall for " << month3 << " in inches: " << endl;
	cin >> rainInch3;

	cin.get();

	avgRainFall = (rainInch1 + rainInch2 + rainInch3) / 3;

	cout << "\nThe average monthly rainfall for " << month1 << ", " << month2 << ", and " << month3 << " was " << setprecision(3) << avgRainFall << " inches.";

	cin.get();
	return 0;
}