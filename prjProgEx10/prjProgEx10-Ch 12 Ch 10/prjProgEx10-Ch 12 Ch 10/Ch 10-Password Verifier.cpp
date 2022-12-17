#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Verifier {

	public:
		bool uCase = false, lCase = false, numCase = false;
		Verifier() {
			
		};


		bool length(char* cString) {
			if (strlen(cString) < 6) {
				return false;
			} else {
				return true;
			}
		};

		bool upperCase(char* cString) {
			int len = strlen(cString);
			while (uCase != true) {
				for (int i = 0; i < len; i++) {
					char c = cString[i];
					if (c >= 'A' && c <= 'Z') {
						uCase = true;
					}
				}
			}
			return uCase;
		};

		bool lowerCase(char* cString) {
			int len = strlen(cString);
			while (lCase != true) {
				for (int i = 0; i < len; i++) {
					char c = cString[i];
					if (c >= 'a' && c <= 'z') {
						lCase = true;
					}
				}
			}
			return lCase;
		};

		bool digit(char* cString) {
			int len = strlen(cString);
			while (numCase != true) {
				for (int i = 0; i < strlen(cString) && numCase != true; i++) {
					char c = cString[i];
					if (c >= '0' && c <= '9') {
						numCase = true;
					}
				}
			}
			return numCase;
		};

		void passwordVerifier(char* cString) {
			int conditions = 0;
			bool passwordLength = length(cString);
			bool passwordUpperCase = upperCase(cString);
			bool passwordLowerCase = lowerCase(cString);
			bool passwordDigit = digit(cString);
			string valid = "Your password is valid.",
				invalid = "This password isn't valid.",
				lenC = "Your password needs to be at least 6 characters long.",
				upC = "Your password needs to contain at least one uppercase letter.",
				lowC = "Your password needs to contain at least one lowercase letter.",
				numC = "Your password needs to contain at least one digit.";

			if (passwordLength == false && passwordUpperCase == true && passwordLowerCase == true && passwordDigit == true) {
				cout << invalid << endl;
				cout << lenC;
			} else if (passwordLength == true && passwordUpperCase == false && passwordLowerCase == true && passwordDigit == true) {
				cout << invalid << endl;
				cout << upC;
			} else if (passwordLength == true && passwordUpperCase == true && passwordLowerCase == false && passwordDigit == true) {
				cout << invalid << endl;
				cout << lowC;
			} else if (passwordLength == true && passwordUpperCase == true && passwordLowerCase == true && passwordDigit == false) {
				cout << invalid << endl;
				cout << numC;
			} else if (passwordLength == true && passwordUpperCase == true && passwordLowerCase == true && passwordDigit == true) {
				cout << valid << endl;
			} else if (passwordLength == false && passwordUpperCase == false && passwordLowerCase == false && passwordDigit == false) {
				cout << invalid << endl;
				cout << lenC << endl;
				cout << upC << endl;
				cout << lowC << endl;
				cout << numC << endl;
			} else if (passwordLength == false && passwordUpperCase == false && passwordLowerCase == false && passwordDigit == true) {
				cout << invalid << endl;
				cout << lenC << endl;
				cout << upC << endl;
				cout << lowC << endl;
			} else if (passwordLength == false && passwordUpperCase == false && passwordLowerCase == true && passwordDigit == false) {
				cout << invalid << endl;
				cout << lenC << endl;
				cout << upC << endl;
				cout << numC << endl;
			} else if (passwordLength == false && passwordUpperCase == true && passwordLowerCase == false && passwordDigit == false) {
				cout << invalid << endl;
				cout << lenC << endl;
				cout << lowC << endl;
				cout << numC << endl;
			} else if (passwordLength == true && passwordUpperCase == false && passwordLowerCase == false && passwordDigit == false) {
				cout << invalid << endl;
				cout << upC << endl;
				cout << lowC << endl;
				cout << numC << endl;
			} else if (passwordLength == false && passwordUpperCase == false && passwordLowerCase == true && passwordDigit == true) {
				cout << invalid << endl;
				cout << lenC << endl;
				cout << upC << endl;
			} else if (passwordLength == false && passwordUpperCase == true && passwordLowerCase == false && passwordDigit == true) {
				cout << invalid << endl;
				cout << lenC << endl;
				cout << lowC << endl;
			} else if (passwordLength == false && passwordUpperCase == true && passwordLowerCase == true && passwordDigit == false) {
				cout << invalid << endl;
				cout << lenC << endl;
				cout << numC << endl;
			} else if (passwordLength == true && passwordUpperCase == true && passwordLowerCase == false && passwordDigit == false) {
				cout << invalid << endl;
				cout << lowC << endl;
				cout << numC << endl;
			} else if (passwordLength == true && passwordUpperCase == false && passwordLowerCase == true && passwordDigit == false) {
				cout << invalid << endl;
				cout << upC << endl;
				cout << numC << endl;
			} else if (passwordLength == true && passwordUpperCase == false && passwordLowerCase == false && passwordDigit == true) {
				cout << invalid << endl;
				cout << upC << endl;
				cout << lowC << endl;
			}
		};
};

int main() {
	Verifier v;
	const int size = 25;
	char password[size];
	cout << "Password Criteria";
	cout << "\nPassword must be at least 6 characters long.";
	cout << "\nPassword must contain at least one uppercase letter.";
	cout << "\nPassword must contain at least one lowercase letter.";
	cout << "\nPassword must contain at least one digit." << endl;
	cout << "Password >> ";
	cin.getline(password,size);
	v.passwordVerifier(password);
	cin.get();
	return 0;
};