#include <iostream>
using namespace std;

class Shape {
public:
	int sides;
	int base;

	Shape(int s, int b) : sides(s), base(b)  {}
	
	void printInfo() const {
		cout << "���� ����: " << sides << endl;
		cout << "�غ��� ����: " << base << endl;
	}
};

class Rectangle : public Shape{
public:
	int length;

	Rectangle(int b, int l) : Shape(4, b), length(l) {
	}

	void area() const {
		cout << "�簢���� ����: " << base * length << endl;
	}
};

class Triangle : public Shape {
public:
	int height;

	Triangle(int b, int h) : Shape(3, b), height(h) {
	}

	void area() const {
		cout << "�ﰢ���� ����: " << 0.5 * base * height << endl;
	}
};

int main() {
	Rectangle r1(10,10);
	r1.printInfo();
	r1.area();

	cout << "--------------" << endl;

	Triangle t1(10, 10);
	t1.printInfo();
	t1.area();
}