#include <iostream>
using namespace std;

class Point {
// 같은 클래스 끼리는 접근 제한이 되지 않음.
private:
	int x, y;
	
public:
	// 생성자
	Point(int p1, int p2) : x(p1), y(p2) {};

	//연산자 오버로딩
	Point* operator+(Point& other) {
		this->x += other.x;
		this->y += other.y;

		return this;
	}

	// 좌표 출력 함수
	void showPoint() {
		cout << "x, y 좌표: (" << x << ", " << y << ")" << endl;
	}
};

int main() {
	Point p1(1, 2);
	p1.showPoint();

	Point p2(2, 5);
	p2.showPoint();

	(p1 + p2)-> showPoint();
}
