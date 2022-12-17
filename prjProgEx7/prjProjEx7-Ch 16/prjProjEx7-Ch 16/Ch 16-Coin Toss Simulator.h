#include<string>
using namespace std;

class Coin
{
public:
	Coin() {
		if (randNumGen() == 1) {
			sideUp = "Heads";
		} else {
			sideUp = "Tails";
		}
	};

	string getSideUp() {
		return this -> sideUp;
	};

	void toss() {
		if (randNumGen() == 1) {
			sideUp = "Heads";
		}
		else {
			sideUp = "Tails";
		}
	};
	
private: 
	string sideUp;
	int randNumGen() {
		int min = 1,
			max = 2;
		int randNum = rand() % (max - min + 1) + min;
		return randNum;
	};

};
