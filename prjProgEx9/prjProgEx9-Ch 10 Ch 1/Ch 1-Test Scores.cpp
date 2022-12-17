#include <iostream>
#include <iomanip>
using namespace std;

class TestScore {

	public:
		double* scores = 0;
		int size, temp;

		TestScore() {
			
		};

		void prompt() {
			cout << "Enter the Total Amount of Test Scores >> ";
			cin >> size;
			scores = new double[size];
			cout << "Enter " << size << " Test Scores >> ";
			for (int i = 0; i < size; i++)
				cin >> *(scores + i);
		};

		void sort() {
			for (int i = 0; i < size; i++) {
				for (int j = i + 1; j < size; j++) {
					if (scores[j] < scores[i])
					{
						temp = scores[i];
						scores[i] = scores[j];
						scores[j] = temp;
					}
				}
			}
		};

		double avg() {
			double sum = 0;
			for (int i = 0; i < size; i++) {
				sum += scores[i];
			}
			return sum / size;
		};

		void display(double avg) {
			cout << "Test Scores >> ";
			for (int i = 0; i < size; i++)
				cout << *(scores + i) << " ";
			cout << endl;
			cout << "Average Score >> " << setprecision(4) << avg;
		};
};

int main() {
	TestScore ts;
	ts.prompt();
	ts.sort();
	cin.get();
	double avg = ts.avg();
	ts.display(avg);
	cin.get();
	return 0;
};