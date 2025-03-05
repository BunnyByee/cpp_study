#include <iostream>
using namespace std;

// 디버그 연습

void funcA(int x) {
	int localA = x + 1;
	cout << "Funcion A: " << localA << endl;
}

void funcB(int x) {
	int localB = x * 2;
	funcA(localB);
	cout << "Funcion B: " << localB << endl;
}

int main() {
	int num = 5;
	funcB(num);
	cout << num << endl;
}