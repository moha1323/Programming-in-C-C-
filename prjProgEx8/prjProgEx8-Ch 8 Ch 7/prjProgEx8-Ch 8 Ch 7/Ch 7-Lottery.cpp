#include <iostream>
using namespace std;

class Lottery
{
public:
	int winningDigits[5],
		player[5],
		x = 0;

	Lottery() {
		LotteryNum(winningDigits);
	};

	int RandNumGen() {
		int min = 0,
			max = 9;
		int randNum = rand() % (max - min + 1) + min;
		return randNum;
	};

	void LotteryNum(int lotteryNum[5]) {
		for (int i = 0; i < 5; i++) {
			lotteryNum[i] = RandNumGen();
		}
	};

	void PlayerNum() {
		cout << "PayDay Lottery >> Choose 5 numbers between 0 and 9." << endl;
		cout << "Lucky Number 1) ";
		cin >> player[0];
		cout << "Lucky Number 2) ";
		cin >> player[1];
		cout << "Lucky Number 3) ";
		cin >> player[2];
		cout << "Lucky Number 4) ";
		cin >> player[3];
		cout << "Lucky Number 5) ";
		cin >> player[4];
	};

	void Matching() {

		if (winningDigits[0] == player[0]) {
			x++;
		}

		if (winningDigits[1] == player[1]) {
			x++;
		}

		if (winningDigits[2] == player[2]) {
			x++;
		}

		if (winningDigits[3] == player[3]) {
			x++;
		}

		if (winningDigits[4] == player[4]) {
			x++;
		}

		cout << "You had " << x << " numbers match!" << endl;
	};

	void DisplayPlayerNum() {
		cout << "Players Numbers: " << player[0] << ", " << player[1] << ", " << player[2] << ", " << player[3] << ", " << player[4] << endl;
	};

	void DisplayLotteyNum() {
		cout << "Winng Numbers: " << winningDigits[0] << ", " << winningDigits[1] << ", " << winningDigits[2] << ", " << winningDigits[3] << ", " << winningDigits[4] << endl;
	};
};

int main() {
	Lottery payDay;
	payDay.PlayerNum();
	cin.get();
	payDay.DisplayLotteyNum();
	payDay.DisplayPlayerNum();
	payDay.Matching();
	cin.get();
	return 0;
}