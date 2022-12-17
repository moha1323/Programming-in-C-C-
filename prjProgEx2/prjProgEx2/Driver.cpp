#include <iostream>
#include "myHeader.h"
using namespace std;
int main() {
	cout << "The total sales tax on a $95 purchase with a state sales tax of 6.5% and a county sales tax of 2% is $" << salesTax() << "." << "\n";
	cout << "The total distance a car can travel on one tank of gas driven in town is " << townMiles() << " miles.\n";
	cout << "The total distance a car can travel on one tank of gas driven on a highway is " << highwayMiles() << " miles.";
	cin.get();
	return 0;
}