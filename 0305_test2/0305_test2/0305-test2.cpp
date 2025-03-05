#include <iostream>
using namespace std;

void OddOrEven(int x) {
	if (x % 2 == 0) {
		cout << "Â¦¼ö" << endl;
	}
	else {
		cout << "È¦¼ö" << endl;
	}
}


int main() {
	OddOrEven(2);
	OddOrEven(3);
}