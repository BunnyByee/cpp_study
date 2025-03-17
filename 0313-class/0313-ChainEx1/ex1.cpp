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

	// & (레퍼런스) : 포인터에서 파생
	Rectangle* compareArea(Rectangle& other) {
		if (this->getArea() >= other.getArea()) {
			return this;
		}
		else {
			return &other;
		}
	}

	void showInfo() {
		cout << "사각형 넓이: " << getArea() << endl;
	}
};

int main() {
	Rectangle r1(10, 20);
	Rectangle r2(20, 20);

	Rectangle* larger = r1.compareArea(r2);
	larger->showInfo(); // 메소드 체이닝
}