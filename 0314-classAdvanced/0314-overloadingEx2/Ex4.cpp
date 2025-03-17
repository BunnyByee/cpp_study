#include <iostream>
using namespace std;

class Point {
// ���� Ŭ���� ������ ���� ������ ���� ����.
private:
	int x, y;
	
public:
	// ������
	Point(int p1, int p2) : x(p1), y(p2) {};

	//������ �����ε�
	Point* operator+(Point& other) {
		this->x += other.x;
		this->y += other.y;

		return this;
	}

	// ��ǥ ��� �Լ�
	void showPoint() {
		cout << "x, y ��ǥ: (" << x << ", " << y << ")" << endl;
	}
};

int main() {
	Point p1(1, 2);
	p1.showPoint();

	Point p2(2, 5);
	p2.showPoint();

	(p1 + p2)-> showPoint();
}
