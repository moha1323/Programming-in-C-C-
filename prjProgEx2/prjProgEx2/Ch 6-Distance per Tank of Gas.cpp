#include "myHeader.h"
#include <iostream>
using namespace std;

double townMiles() {
	int gasTank = 20;//gallons
	double townGasMileage = 23.5,
		totalTownMiles;
	totalTownMiles = townGasMileage * gasTank;
	return totalTownMiles;
}
double highwayMiles() {
	int gasTank = 20;//gallons
	double highwayGasMileage = 28.9,
		totalHighwayMiles;
	totalHighwayMiles = highwayGasMileage * gasTank;
	return totalHighwayMiles;
}