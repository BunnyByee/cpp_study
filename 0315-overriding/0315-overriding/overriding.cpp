#include <iostream>
using namespace std;

// �Լ��� ���¸� ������ ���� (��ü X)
void add(int a, int b) {
	cout << a + b << endl;
}

// �߻� Ŭ���� -> �������̽��� ����, �ν��Ͻ��� ���� �� ����.
class Animal {
public:
	// ���� �Լ� : �⺻���� �����ϴ� ����
	/*virtual void speak() {
		cout << "������ �Ҹ� ���ϴ�" << endl;
	}*/
	
	// ���� ���� �Լ� (�߻� �޼ҵ�) : ��ü���� ����� ����.
	virtual void speak() = 0;
};

// �������̵带 ���ϸ� �߻� Ŭ������ ��. -> �ν��Ͻ��� ���� �� ����.
class Dog : public Animal {
public:
	void speak() override {
		cout << "�۸�" << endl;
	}

	void tailSwing() {
		cout << "������ �����" << endl;
	}
};

class Dinosaur : public Animal {
public:
	void speak() override {
		cout << "ũ��ũ��" << endl;
	}
};

int main() {
	//add(10, 2); // ������ �� -> ��ü�� ���� (���� ���ε�)

	// Animal a; ���� �߻�
	
	Animal* animal = nullptr; // �ִϸ� Ŭ���� ������ ���� ����
	// �����͸� ������� ������ ���� ���ε��� ��.

	//animal = &dog; // ���� �ν��Ͻ��� �ּҷ� �ʱ�ȭ
	//animal->speak();
	// animal->tailSwing(); 
	// Animal Ŭ���������� �������� �ʴ� �Լ��� �ν� �Ұ��� 

	string choice;
	cin >> choice;

	if (choice == "������") { // ���ÿ� ���� �ν��Ͻ� ����
		animal = new Dog();
	}
	else {
		animal = new Dinosaur();
	}
	animal->speak();
	delete animal;
}