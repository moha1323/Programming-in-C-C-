#include "myHeader.h"
#include <iostream>
using namespace std;

double salesTax() {
	double purchase = 95,//dollars
		stateSalesTax = .065,
		countySalesTax = .02,
		totalTax;

	totalTax = (purchase * stateSalesTax) + (purchase * countySalesTax);
	return totalTax;
}