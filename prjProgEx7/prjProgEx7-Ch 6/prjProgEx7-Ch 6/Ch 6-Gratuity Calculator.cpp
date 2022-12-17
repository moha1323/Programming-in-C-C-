#include <iostream>
#include <iomanip>
#include "Ch 6-Gratuity Calculator.h"
using namespace std;

int main() {
	double taxRate,
		totalBill,
		tipRate;
	bool run = true;
	int quit = 0;

	while (run == true) {
		if (quit != 1) {
			cout << "Enter the Total Bill >> ";
			cin >> totalBill;
			cout << endl;
			cout << "Enter the Tax Rate >> ";
			cin >> taxRate;
			cout << endl;
			cout << "Enter the Tip Rate >> ";
			cin >> tipRate;
			cout << endl;

			Tips bill(taxRate);
			cout << "Tip Amount: " << setprecision(4) << bill.computeTip(totalBill, tipRate);
			cout << "\n\n";
			cout << "Press '0' to continue or '1' to quit >> ";
			cin >> quit;
			cout << endl;

		}
		else {
			run = false;
		}
	}

	return 0;
}