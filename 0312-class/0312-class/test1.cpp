#include <iostream>
using namespace std;

// Ŭ���� �ȿ� �ִ� ���� -> ��� ����(�ʵ�)
// Ŭ���� �ȿ� �ִ� �Լ� -> ��� �Լ�(�޼ҵ�)
class Car {
private:
	string brand;
	int speed;

public:
	void drive() {
		cout << brand << "�� " << speed << "km/h�� �����մϴ�" << endl;
	}
};

int main() {
	Car c1;
}