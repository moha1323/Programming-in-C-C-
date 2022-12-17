#include <iostream>
#include <string>
#include "Ch 16-Coin Toss Simulator.h"
using namespace std;

int main() {
	Coin face();
	cout << "Coin Face: " << face.getSideUp();
	for (int i = 0; i < 20; i++) {
		face.toss();
		cout << "Coin Face: " << face.getSideUp();
	};
	cin.get();
	return 0;
};