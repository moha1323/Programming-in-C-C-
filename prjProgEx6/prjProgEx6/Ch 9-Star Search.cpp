#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

class TalentShow {
	double judgeScore[5];

	public:
		TalentShow() {

		}

	void getJudgeData() {
		for (int i = 0; i < 5; i++) {
			cout << "Judge " << i + 1 << ") Enter your score: ";
			cin >> judgeScore[i];
		}
		cin.get();
	}

	double calcScore() {
		double totalScore = judgeScore[0] + judgeScore[1] + judgeScore[2] + judgeScore[3] + judgeScore[4];
		double holder = (totalScore - findLowest()) - findHighest();
		double finalScore = holder / 3;
		return finalScore;
	}

	double findLowest() {
	  double *minimum = min_element(begin(judgeScore), end(judgeScore));
	  return  *minimum;
	}

	double findHighest() {
		double *maximum = max_element(begin(judgeScore), end(judgeScore));
		return *maximum;
	}

};

int main() {
	TalentShow ts;
	ts.getJudgeData();
	cout << "Final Score: " << setprecision(2) << ts.calcScore();
	cin.get();
	return 0;
}