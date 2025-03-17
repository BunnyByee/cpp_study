#include <iostream>
using namespace std;

class Vehicle {
protected :
	int speed = 0;
public:
	// 순수 가상 함수 활용
	virtual void accelerate() = 0;

	// 가상 함수 활용
	virtual void showSpeed() {
		cout << "현재 차량의 속도: " << speed << "km" << endl;
	}
	
	// 가상 소멸자
	virtual ~Vehicle (){}
};

class Car : public Vehicle {
public:
	void accelerate() override {
		speed += 15;
		cout << "탈것의 속도가 10km만큼 증가" << endl;
	}

	virtual void showSpeed() override {
		cout << "현재 자동차의 속도: " << speed << "km" << endl;
	}
};

class SportsCar : public Vehicle {
public:
	void accelerate() override {
		speed += 30;
		cout << "스포츠카의 속도가 30km만큼 증가" << endl;
	}

	virtual void showSpeed() override {
		cout << "현재 스포츠카의 속도: " << speed << "km" << endl;
	}
};

class Truck : public Vehicle {
public:
	void accelerate() override {
		speed += 10;
		cout << "트럭의 속도가 10km만큼 증가" << endl;
	}

	virtual void showSpeed() override {
		cout << "현재 트럭의 속도: " << speed << "km" << endl;
	}
};


int main() {
	int choice;
	Vehicle* v = nullptr;

	cout << "자동차 유형을 선택하세요: " << endl;
	cout << "1. Car (일반 자동차)" << endl;
	cout << "2. SportsCar (스포츠카)" << endl;
	cout << "3. Truck (트럭)" << endl;
	cout << "입력: ";
	cin >> choice;

	switch (choice) {
		case 1 :
			v = new Car;
			break;
		case 2:
			v = new SportsCar;
			break;
		case 3:
			v = new Truck;
			break;
		default :
			cout << "잘못된 선택입니다. 일반 자동차로 정합니다." << endl;
			v = new Car;
	}

	v->accelerate();
	v->showSpeed();
	delete v;
}