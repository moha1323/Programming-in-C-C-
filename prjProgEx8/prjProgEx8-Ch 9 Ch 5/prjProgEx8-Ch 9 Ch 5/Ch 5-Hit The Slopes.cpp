#include <iostream>
#include <string>
using namespace std;

class SnowFall 
{
	private: 
		int dayOfTheMonth;
		double snowFallInch;
		string month;

	public:
		SnowFall() {
		
		};

		SnowFall(int x, double y) {
			dayOfTheMonth = x;
			snowFallInch = y;
		};

		void getSnowCondition(int day1, double snow1, int day2, double snow2, int day3, double snow3, int day4, double snow4, int day5, double snow5, int day6, double snow6, int day7, double snow7) {
			int startingDate, endingDate;
			cout << "Ski Resort -> Snow Condition" << endl;
			cout << "Enter the Month of the Year >> ";
			cin >> month;
			cout << "Enter the Starting Date >> ";
			cin >> startingDate;
			cout << "Enter the Ending Date >> ";
			cin >> endingDate;
			day1 = startingDate,
				day2 = startingDate + 1,
				day3 = startingDate + 2,
				day4 = startingDate + 3,
				day5 = startingDate + 4,
				day6 = startingDate + 5,
				day7 = endingDate;
			cout << "Snow Report " << month << " " << startingDate << " - " << endingDate << endl;
			cout << "Enter the Base Snow Depths(inch) on " << day1 << " >> ";
			cin >> snow1;
			cout << "Enter the Base Snow Depths(inch) on " << day2 << " >> ";
			cin >> snow2;
			cout << "Enter the Base Snow Depths(inch) on " << day3 << " >> ";
			cin >> snow3;
			cout << "Enter the Base Snow Depths(inch) on " << day4 << " >> ";
			cin >> snow4;
			cout << "Enter the Base Snow Depths(inch) on " << day5 << " >> ";
			cin >> snow5;
			cout << "Enter the Base Snow Depths(inch) on " << day6 << " >> ";
			cin >> snow6;
			cout << "Enter the Base Snow Depths(inch) on " << day7 << " >> ";
			cin >> snow7;
		};

		int getDay() {
			return dayOfTheMonth;
		};

		double getSnowFall() {
			return snowFallInch;
		};
};

int main() {
	const int SIZE = 7;
	int day1 = 0, day2 = 0 , day3 = 0, day4 = 0, day5 = 0, day6 = 0, day7 = 0;
	double snow1 = 0, snow2 = 0, snow3 = 0, snow4 = 0, snow5 = 0, snow6 = 0, snow7 = 0;
	SnowFall data;
	data.getSnowCondition(day1, snow1, day2, snow2, day3, snow3, day4, snow4, day5, snow5, day6, snow6, day7, snow7);
	SnowFall resort[SIZE] = {
		SnowFall(day1, snow1),
		SnowFall(day2, snow2),
		SnowFall(day3, snow3),
		SnowFall(day4, snow4),
		SnowFall(day5, snow5),
		SnowFall(day6, snow6),
		SnowFall(day7, snow7)
	};

	cin.get();

	for (int i = 0; i < SIZE; i++) {
		cout << resort[i].getDay() << " " << resort[i].getSnowFall() << endl;
	};

	cin.get();
	return 0;
};