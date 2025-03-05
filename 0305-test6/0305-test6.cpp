#include <iostream>
using namespace std;

int powerNum(int a, int b) {
	if (b == 1) return a;
	int result = powerNum(a, b - 1);
	return a * result;
}

int main() {
	cout << powerNum(2, 5);
}