#include <iostream>
using namespace std;

class AbstractSeq {
	public:
		virtual int fun(int k) = 0;

		void printSeq(int k, int m) {
			while (k <= m) {
				cout << fun(k) << ", ";
				k++;
			}
		};

		int sumSeq(int k, int m) {
			int result = 0;
			while (k <= m) {
				result = result + fun(k);
				k++;
			}
			return result;
		};

};

class EvenSeqSum : public AbstractSeq {
	public:
		EvenSeqSum() {
		
		};
		
		int fun(int k) {
			//int result = k * 2;
			return k * 2;
		};
};

class OddSeqSum : public AbstractSeq {
	public:
		OddSeqSum() {
		
		};

		int fun(int k) {
			//int result = k * 2 + 1;
			return k * 2 + 1;
		};
};

int main() {
	AbstractSeq *EvenSeqResult,
		*OddSeqResult;
	EvenSeqResult = new EvenSeqSum();
	OddSeqResult = new OddSeqSum();

	cout << "Even number sequence between 1 & 10" << endl << endl;
	EvenSeqResult->printSeq(1, 5);
	cout << "\b\b." << endl << endl;
	cout << "Sum of Sequence > " << EvenSeqResult->sumSeq(1, 5) << endl << endl;
	
	cout << "Odd number sequence between 1 & 10" << endl << endl;
	OddSeqResult->printSeq(0, 4);
	cout << "\b\b." << endl << endl;
	cout << "Sum of Sequence > " << OddSeqResult->sumSeq(0, 4) << endl;

	cin.get();
	return 0;
};