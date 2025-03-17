#include <iostream>
using namespace std;

struct Rectangle {
	int width;
	int height;

	void cal() {
		cout << "넓이: " << width * height << endl;
	}
};

int main() {
	Rectangle r1;
	cout << "가로 세로 길이를 입력하세요: ";
	cin >> r1.width >> r1.height;

	r1.cal();
}