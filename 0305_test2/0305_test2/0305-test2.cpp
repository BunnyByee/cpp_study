#include <iostream>
using namespace std;

void OddOrEven(int x) {
	if (x % 2 == 0) {
		cout << "¦��" << endl;
	}
	else {
		cout << "Ȧ��" << endl;
	}
}


int main() {
	OddOrEven(2);
	OddOrEven(3);
}