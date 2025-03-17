#include <iostream>
using namespace std;

class Person {
public:
	string* name;
	int age;

	Person(string name, int age) {
		this->name = new string(name);
		this->age = age;
	}

	// ���� ������, other -> �ٸ� �ν��Ͻ�
	Person(Person& other) {
		this->name = new string(*other.name);
		this->age = other.age;
	}
	void setAge(int age) {
		this->age = age;
	}
	void showInfo() {
		cout << "�̸�: " << *name << endl;
		cout << "����: " << age << endl;
	}
	// �Ҹ��� : Ŭ������ �ν��Ͻ��� ������ ��, �Ҹ��ڰ� �����.
	~Person() {
		delete name;
		cout << "Person Ŭ���� �Ҹ�" << endl;
	}
};

int main() {
	Person p1("��¯��",5);
	p1.showInfo();

	Person p2 = p1;
	*p2.name = "��ö��";
	p2.showInfo();
}