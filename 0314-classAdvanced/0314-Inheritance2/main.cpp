#include <iostream>
using namespace std;

class Parent {
public:
	string familyName;
	
	Parent(string fn) { // �Ű������� �ִ� ������
		familyName = fn;
		cout << "�θ� Ŭ���� ����" << endl;
	}

	void showFamilyName() {
		cout << "�츮 ������ ����: " << familyName << endl;
	}

	~Parent() {
		cout << "�θ� Ŭ���� ����" << endl;
	}
};

class Child : public Parent {
public:
	int age;

	// �θ� Ŭ������ �����ڸ� ��������� ȣ��
	Child() : Parent("��"), age(20) {
		// Parent()
		cout << "�ڽ� Ŭ���� ����" << endl;
	}

	~Child() {
		cout << "�ڽ� Ŭ���� ����" << endl;
		// ~Parent()
	}
};


int main() {
	Child c1;
	c1.familyName = "��";
	c1.showFamilyName();
}