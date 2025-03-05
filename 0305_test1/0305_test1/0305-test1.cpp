#include <iostream>
using namespace std;

//// return 사용
//int add(int x, int y) {
//	return x + y;
//}


void add(int x, int y) {
	cout << x + y << endl;
}

void sub(int x, int y) {
	cout << x - y << endl;
}

void mul(int x, int y) {
	cout << x * y << endl;
}
void divide(int x, int y) {
	if (y == 0) {
		cout << "0으로 나눌 수 없습니다." << endl;
	}
	else {
		cout << (float) x / y << endl;
	}
}


int main() {
	add(10, 3);
	sub(10, 3);
	mul(10, 3);
	divide(10, 3);
}