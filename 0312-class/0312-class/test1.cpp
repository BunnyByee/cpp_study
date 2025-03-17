#include <iostream>
using namespace std;

// 클래스 안에 있는 변수 -> 멤버 변수(필드)
// 클래스 안에 있는 함수 -> 멤버 함수(메소드)
class Car {
private:
	string brand;
	int speed;

public:
	void drive() {
		cout << brand << "가 " << speed << "km/h로 주행합니다" << endl;
	}
};

int main() {
	Car c1;
}