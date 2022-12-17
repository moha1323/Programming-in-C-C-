#include <iostream>
#include <cstring>
using namespace std;

class Counter {
	
	public: 
		int space;
		Counter() {
	
		};

		int wordCounter(char cString[]) {
			int x = 0;
			for (int i = 0; cString[i] != '\0'; i++) {
				if (cString[i] == ' ') {
					x++;
				}
			}
			space = x;
			return x + 1;
		};

		int avgNumLetter(char cString[]) {
			int letters = strlen(cString);
			letters = letters - space;
			return letters / wordCounter(cString);
		};

};


int main() {
	const int size = 80;
	char cString[size];
	Counter ct;
	cout << "Enter your sentence >> ";
	cin.getline(cString, size);
	cout << "Your sentence contains " << ct.wordCounter(cString) << " words." << endl;
	cout << "The average number of letters in each word is " << ct.avgNumLetter(cString) << "." << endl;
	cin.get();
	return 0;
};