#include <iostream>
using namespace std;

// c��Ÿ��
typedef struct Point {
	int x;
	int y;
} PointAlias;

// c++
struct Address {
	string city;
	string street;
};

// ����ü �ȿ� ����ü ����!
struct Person {
	string name;
	int age;
	Address address;

	// C++�� ��� �Լ��� ���� ����
	void doit() {
		cout << name << "��(��) ���� �ڴ� ���Դϴ�." << endl;
	}
};
using P = Person; // ��Ī ����

int main() {
	Person p1;
	p1.name = "��¯��";
	p1.age = 5;
	p1.address = {"�ʷϱ�", "���ٸ���"};

	Person p2 = { "���̼�", 29, {"�ʷϱ�", "���ٸ���"} };

	P* ptr = &p1;
	cout << (*ptr).name << endl;
	cout << ptr->name << endl;
	cout << ptr->address.street << endl;

	/*p1.doit();
	p2.doit();*/

	/*cout << "P1" << endl;
	cout << "�̸�: " << p1.name << endl;
	cout << "�ּ�: " << p1.address << endl;
	cout << "����: " << p1.age << endl;

	cout << "P2" << endl;
	cout << "�̸�: " << p2.name << endl;
	cout << "�ּ�: " << p2.address << endl;
	cout << "����: " << p2.age << endl;*/


}