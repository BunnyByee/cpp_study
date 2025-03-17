#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;

	// Point Struct의 형태로 넣어야 한다..?
	// Point other -> 복사, Point other = p2
	// Point& other -> 복사할 필요없고 메모리 값을 바로 가져오기.
	// const <- 불러오는 메모리의 값을 변경하지 못하게 막기

	void add(const Point& other) { // int* const b = &a 비슷함!
		int xSum = x + other.x; // x += other.x
		int ySum = y + other.y; // y += other.y
		cout << "좌표의 합: (" << xSum << ", " << ySum << ")" <<endl;
		// cout << "좌표의 합: (" << x << ", " << y << ")" <<endl;
	}
};

int main() {
	Point p1, p2;

	cout << "첫 번째 좌표값을 입력하세요: ";
	cin >> p1.x >> p1.y;

	cout << "두 번째 좌표값을 입력하세요: ";
	cin >> p2.x >> p2.y;

	p1.add(p2);
}