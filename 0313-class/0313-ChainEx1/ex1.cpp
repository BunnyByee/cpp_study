#include <iostream>
using namespace std;

class Rectangle {
private:
	int width;
	int height;

public:
	Rectangle(int width, int height) {
		this->width = width;
		this->height = height;
	}
	int getArea() {
		return width * height;
	}

	// & (���۷���) : �����Ϳ��� �Ļ�
	Rectangle* compareArea(Rectangle& other) {
		if (this->getArea() >= other.getArea()) {
			return this;
		}
		else {
			return &other;
		}
	}

	void showInfo() {
		cout << "�簢�� ����: " << getArea() << endl;
	}
};

int main() {
	Rectangle r1(10, 20);
	Rectangle r2(20, 20);

	Rectangle* larger = r1.compareArea(r2);
	larger->showInfo(); // �޼ҵ� ü�̴�
}