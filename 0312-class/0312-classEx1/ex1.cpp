#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age;
public:
	void setName(string name) {
		this->name = name;
		// (*this).name = n;
		// �ߺ��� ��� ����
	}
	void setAge(int age) {
		this->age = age;
	}
	void showInfo() {
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
};

int main() {
	Person p1;

	p1.setName("��¯��");
	p1.setAge(5);
	p1.showInfo();
}