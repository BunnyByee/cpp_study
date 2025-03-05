#include <iostream>
using namespace std;

int maxNum(int x, int y, int z) {
	if (x > y && x > z) {
		return x;
	}
	else if (y > x && y > z) {
		return y;
	}
	else {
		return z;
	}
}

int main() {
	cout << maxNum(2, 3, 5) << endl;
}