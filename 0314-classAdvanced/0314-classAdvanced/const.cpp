#include <iostream>
using namespace std;

class Car {
private:
	string brand;

public:
	int speed;

	void setBrand(string brand) {
		this->brand = brand;
	}


	// �귣�带 ����ϴ� �Լ� (�귣�带 �����ϸ� �ȵ�!!)
	void showBrand() const {
		brand = "Hyundai";
		cout << "�귣��: " << brand << endl;
	}
};

int main() {
	const Car c1;
	// c1.setBrand("bmw"); �Ұ���
	// c1.speed = 100; �Ұ���
}