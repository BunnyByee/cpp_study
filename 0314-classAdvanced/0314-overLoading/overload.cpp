#include <iostream>
using namespace std;

class CalcParent {
public:
	int add(int a, int b) {
		cout << "�� �� ���ϱ�" << endl;
		return a + b;
	}
};

class CalcChild : public CalcParent {
public:
	// �����ε�
	int add(int a, int b, int c) {
		cout << "�� �� ���ϱ�" << endl;
		return a + b + c;
	}
};


int main() {
	CalcChild c1;
	cout << c1.add(30, 50) << endl;
	cout << c1.add(30, 50, 100) << endl;
}