#include <iostream>
using namespace std;

struct Rectangle {
	int width;
	int height;

	void cal() {
		cout << "����: " << width * height << endl;
	}
};

int main() {
	Rectangle r1;
	cout << "���� ���� ���̸� �Է��ϼ���: ";
	cin >> r1.width >> r1.height;

	r1.cal();
}