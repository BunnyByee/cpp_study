#include <iostream>
using namespace std;

class CalcParent {
public:
	int add(int a, int b) {
		cout << "두 개 더하기" << endl;
		return a + b;
	}
};

class CalcChild : public CalcParent {
public:
	// 오버로딩
	int add(int a, int b, int c) {
		cout << "세 개 더하기" << endl;
		return a + b + c;
	}
};


int main() {
	CalcChild c1;
	cout << c1.add(30, 50) << endl;
	cout << c1.add(30, 50, 100) << endl;
}