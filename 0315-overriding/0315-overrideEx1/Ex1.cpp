#include <iostream>
using namespace std;

class Vehicle {
protected :
	int speed = 0;
public:
	// ���� ���� �Լ� Ȱ��
	virtual void accelerate() = 0;

	// ���� �Լ� Ȱ��
	virtual void showSpeed() {
		cout << "���� ������ �ӵ�: " << speed << "km" << endl;
	}
	
	// ���� �Ҹ���
	virtual ~Vehicle (){}
};

class Car : public Vehicle {
public:
	void accelerate() override {
		speed += 15;
		cout << "Ż���� �ӵ��� 10km��ŭ ����" << endl;
	}

	virtual void showSpeed() override {
		cout << "���� �ڵ����� �ӵ�: " << speed << "km" << endl;
	}
};

class SportsCar : public Vehicle {
public:
	void accelerate() override {
		speed += 30;
		cout << "������ī�� �ӵ��� 30km��ŭ ����" << endl;
	}

	virtual void showSpeed() override {
		cout << "���� ������ī�� �ӵ�: " << speed << "km" << endl;
	}
};

class Truck : public Vehicle {
public:
	void accelerate() override {
		speed += 10;
		cout << "Ʈ���� �ӵ��� 10km��ŭ ����" << endl;
	}

	virtual void showSpeed() override {
		cout << "���� Ʈ���� �ӵ�: " << speed << "km" << endl;
	}
};


int main() {
	int choice;
	Vehicle* v = nullptr;

	cout << "�ڵ��� ������ �����ϼ���: " << endl;
	cout << "1. Car (�Ϲ� �ڵ���)" << endl;
	cout << "2. SportsCar (������ī)" << endl;
	cout << "3. Truck (Ʈ��)" << endl;
	cout << "�Է�: ";
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
			cout << "�߸��� �����Դϴ�. �Ϲ� �ڵ����� ���մϴ�." << endl;
			v = new Car;
	}

	v->accelerate();
	v->showSpeed();
	delete v;
}