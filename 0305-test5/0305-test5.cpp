#include <iostream>
using namespace std;

// 재귀함수 연습
void RecursiveFunc(int n) {
	if (n == 0) return;
	cout << "재귀함수 호출" << endl;
	RecursiveFunc(n-1);
}

// 팩토리얼 함수
int factorial(int n) {
	int result = 1;
	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}

int factorialRe(int n) {
	if (n == 1) return 1;
	int facValue = factorialRe(n - 1);
	return  n * facValue;
}

int main() {
	int result = factorialRe(3);
	cout << "팩토리얼: " << result << endl;
}