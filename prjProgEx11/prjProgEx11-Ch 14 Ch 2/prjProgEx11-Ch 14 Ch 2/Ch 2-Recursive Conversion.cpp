#include <iostream>
using namespace std;

class Recursion {

public:
	Recursion() {
	
	};

	void sign(int n) {
		if(n > 0) {
			cout << "No Parking\n";
			sign(n - 1);
		}
	};

};


int main() {
	Recursion rs;
	rs.sign(5);
	cin.get();
	return 0;
};