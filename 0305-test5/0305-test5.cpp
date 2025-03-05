#include <iostream>
using namespace std;

// ����Լ� ����
void RecursiveFunc(int n) {
	if (n == 0) return;
	cout << "����Լ� ȣ��" << endl;
	RecursiveFunc(n-1);
}

// ���丮�� �Լ�
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
	cout << "���丮��: " << result << endl;
}