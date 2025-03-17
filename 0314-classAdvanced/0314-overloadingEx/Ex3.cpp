#include <iostream>
using namespace std;

class Shape {
public:
	void area(int side) {
		cout << "정사각형 면적: " << side * side << endl;
	}

	void area(int width, int height) {
		cout << "직사각형 면적: " << width * height << endl;
	}

	void area(double radius) {
		cout << "원 면적: " << 3.14159 * radius * radius << endl;
	}
};

int main() {
	Shape s1;
	s1.area(5);
	s1.area(10, 20);
	s1.area(3.5);
}