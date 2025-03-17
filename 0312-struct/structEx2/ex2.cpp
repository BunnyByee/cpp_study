#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;

	// Point Struct�� ���·� �־�� �Ѵ�..?
	// Point other -> ����, Point other = p2
	// Point& other -> ������ �ʿ���� �޸� ���� �ٷ� ��������.
	// const <- �ҷ����� �޸��� ���� �������� ���ϰ� ����

	void add(const Point& other) { // int* const b = &a �����!
		int xSum = x + other.x; // x += other.x
		int ySum = y + other.y; // y += other.y
		cout << "��ǥ�� ��: (" << xSum << ", " << ySum << ")" <<endl;
		// cout << "��ǥ�� ��: (" << x << ", " << y << ")" <<endl;
	}
};

int main() {
	Point p1, p2;

	cout << "ù ��° ��ǥ���� �Է��ϼ���: ";
	cin >> p1.x >> p1.y;

	cout << "�� ��° ��ǥ���� �Է��ϼ���: ";
	cin >> p2.x >> p2.y;

	p1.add(p2);
}